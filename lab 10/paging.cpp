#include<iostream>
using namespace std;

int main(){
    int memory, pageSize, numberOfProcess, numberOfPages, remainderPages;
    cout<<"Enter the size of memory"<<endl;
    cin>>memory;
    cout<<"Enter the page size"<<endl;
    cin>>pageSize;
    numberOfPages=remainderPages=memory/pageSize;
    cout<<"Enter the number of processes"<<endl;
    cin>>numberOfProcess;
    int arr[numberOfProcess];
    int arr1[numberOfProcess][100];
    for(int i=0;i<numberOfProcess;i++)
    {
        cout<<"Enter the number of pages for process "<<i+1<<endl;
        cin>>arr[i];
        if(remainderPages<arr[i])
        {
            cout<<"Memory Full"<<endl;
        }
        else
        {
            for(int j=0;j<arr[i];j++)
            {
                cout<<"Enter the frame number for "<<j+1<<" page of process "<<i+1;
                cin>>arr1[i][j];
            }
        }
        remainderPages-=arr[i];
    }
    int processNumber, pageNumber, offset, physicalAddress;
    cout<<"Enter the process number you want to find details of"<<endl;
    cin>>processNumber;
    cout<<"Enter the page number of process "<<processNumber<<endl;
    cin>>pageNumber;
    cout<<"Enter the offset "<<endl;
    cin>>offset;
    physicalAddress = (arr1[processNumber-1][pageNumber-1]-1)*pageSize+offset;
    cout<<"The physical address is : "<<physicalAddress<<endl;
    return 0;
}