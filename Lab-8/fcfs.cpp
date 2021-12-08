#include<iostream>
#include<cstdlib>
using namespace std;
void fcfs(int a[],int n,int h)
{
	int d,ad=0;
	for(int i=0;i<n;i++)
	{
		d=abs(h-a[i]);
		ad+=d;
		h=a[i];
	}
	cout<<"Absolute distance= "<<ad<<endl;
	cout<<"Sequence: ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main()
{
	int n,h;
	cout<<"Size: ";
	cin>>n;
	cout<<"Head: ";
	cin>>h;
	int *a=new int[n];
	cout<<"Enter access points: \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	fcfs(a,n,h);
	delete []a;
	return 0;
}
