#include <iostream>
using namespace std;

void sequential(int files[]){
    int flag=0, startBlock, len, i;
    cout << "Enter the starting block and length of the files:" << endl;
    cin >> startBlock >> len;

    for(int i=startBlock; i<(startBlock+len); i++){
        if(files[i]==0){
            flag++;
        }
    }

    if(len==flag){
        for(i=startBlock; i<(startBlock+len); i++){
            if(files[i]==0){
                files[i]=1;
                cout << i << "\t" << files[i] << endl;
            }
        }
        if(i!=(startBlock+len-1)){
            cout << "The file is allocated to the disk" << endl;
        }
    }

    else{
        cout << "The file is not allocated to the disk" << endl;
    }
    cout << "Do you want to enter more files ? " << endl;
    int ch;
    cout << "Press 1 for YES, 0 for NO: ";
    cin >> ch;
    if(ch==1){
        sequential(files);
    } 
    else{
        exit(0);
    }
    return;
}

int main(){
    int files[50];
    for(int i=0; i<50; i++){
        files[i]=0;
    }

    cout << "Files allocated are: " << endl;
    sequential(files);
    return 0;
}