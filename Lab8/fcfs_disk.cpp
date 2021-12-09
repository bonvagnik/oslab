#include<bits/stdc++.h>
using namespace std;
int main(){
    int requests[] = {40,50,64,4,74,60,5};
    int head = 20;
    int distance =0;
    for(int i=0;i<7;i++){
        int sd = abs(head-requests[i]);
        distance+=sd;
        head=requests[i];
    }

    cout<<distance;
}
    