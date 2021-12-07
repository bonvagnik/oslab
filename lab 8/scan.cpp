#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void scan(int a[],int n,int h)
{
	int *s=new int[n];
	int ad,chk,pos,j;
	ad=chk=j=0;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]<h)
		{
			ad+=abs(h-a[i]);
			h=a[i];
			s[j++]=a[i];
			if(chk==0)
				pos=i;
			chk=1;
		}
	}
	for(int i=pos+1;i<n;i++)
	{
		ad+=abs(h-a[i]);
		h=a[i];
		s[j++]=a[i];
	}
	cout<<"Absolute diff= "<<ad<<endl;
	cout<<"Sequence: ";
	for(int i=0;i<n;i++)
		cout<<s[i]<<" ";
	delete []s;
}
int main()
{
	int n,h;
	cout<<"Size: ";
	cin>>n;
	cout<<"Head: ";
	cin>>h;
	cout<<"Sequence:\n";
	int *a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,n);
	scan(a,n,h);
	delete []a;
	return 0;
}
