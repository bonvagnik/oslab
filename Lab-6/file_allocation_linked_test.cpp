#include <iostream>
using namespace std;

void linked(int pages[]){
    int startBlock, len;
    cout << "Enter the index of the starting block and its length: ";
    cin >> startBlock >> len;
    int i=len;
    if(pages[startBlock]==0){
        for(int j=startBlock; j<(startBlock+i); j++){
            if(pages[j]==0){
                pages[j]=1;
                cout << j << "------->" << pages[j] << endl;
            }
            else{
                cout << "The block " << j << " is already allocated" << endl;
                i++;
            }
        }
    }
    else{
        cout << "The block " << startBlock << " is already allocated" << endl;
    }
    cout << "Do you want to enter more files ?" << endl;
    cout << "Enter 1 for Yes, Enter 0 for No: ";
    int ch;
    cin >> ch;
    if(ch==1){
        linked(pages);
    }
    else{
        exit(0);
    }
    return;
}

int main(){
    int pages[50], p, a;
    for(int i=0; i<50; i++){
        pages[i]=0;
    }
    cout << "Enter the number of blocks already allocated: " << endl;
    cin >> p;
    for(int i=0; i<p; i++){
        cin >> a;
        pages[a]=1;
    }
    linked(pages);
    return 0;
}
