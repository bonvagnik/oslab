#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> blocks{20,10,40,35,25};
    vector<int> processes{18,28,34,5,12};
    map<int,int> maps;
    int internal_frag=0;
    for(int i=0;i<blocks.size();i++){
        maps[blocks[i]]=0;
    }
    for(int i=0;i<processes.size();i++){
        for(int j=0;j<blocks.size();j++){
            if(maps[blocks[j]]>0){
                continue;
            }else{
                if(processes[i]<=blocks[j]){
                    internal_frag+= blocks[j]-processes[i];
                    maps[blocks[j]]++;
                    break;
                }
            }
        }
    }
    cout<<internal_frag;
}