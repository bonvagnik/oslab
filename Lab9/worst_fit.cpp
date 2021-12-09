#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> blocks{20,10,40,35,25};
    vector<int> processes{18,28,34,5,12};
    map<int,int> maps;
    int internal_frag=0;
    int max;
    int max_index=0;
    bool max_visited;
    for(int i=0;i<blocks.size();i++){
        maps[blocks[i]]=0;
    }
    for(int i=0;i<processes.size();i++){
        max=-1;
        max_visited=false;
        for(int j=0;j<blocks.size();j++){
            if(maps[blocks[j]]>0){
                
                continue;
            }else{
                if(blocks[j]-processes[i]>0){
                    max_visited=true;
                int curr_max =blocks[j]-processes[i] ;
                if(curr_max>max){
                    max = curr_max;
                    max_index = j;
                    
                }
                }
            }
        }
        if(!max_visited){
            
            max=0;}
        // cout<<max<<" ";
        internal_frag+=max;
        maps[blocks[max_index]]++;
    }
    cout<<internal_frag;
}