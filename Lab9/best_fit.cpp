#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> blocks{20,10,40,35,25};
    vector<int> processes{18,28,34,5,12};
    map<int,int> maps;
    int internal_frag=0;
    int min;
    int min_index=0;
    for(int i=0;i<blocks.size();i++){
        maps[blocks[i]]=0;
    }
    for(int i=0;i<processes.size();i++){
        min=INT_MAX;
        for(int j=0;j<blocks.size();j++){
            if(maps[blocks[j]]>0){
                continue;
            }else{
                if(blocks[j]-processes[i]>0){

                int curr_min =blocks[j]-processes[i] ;
                if(curr_min<min){
                    min = curr_min;
                    min_index = j;
                
                }
                }
            }
        }
        internal_frag+=min;
        maps[blocks[min_index]]++;
    }
    cout<<internal_frag;
}