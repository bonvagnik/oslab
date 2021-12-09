#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> blockSize{20,10,40,35,25};
    vector<int> processSize{18,28,34,5,12};
    int fragmentation = 0;
    for(int i=0;i<5;i++){
       
        int min = abs(processSize[i]-blockSize[0]);
        int bestIdx=0;
        for(int j=0;j<blockSize.size();j++){
            if(abs(processSize[i]-blockSize[j])<min){
            
             min = abs(processSize[i]-blockSize[j]);
             bestIdx = j;
            cout<<min<<" ";
            }
        }
        blockSize.erase(blockSize.begin()+bestIdx);
    
        fragmentation+=min;
    }
    cout<<fragmentation;
}