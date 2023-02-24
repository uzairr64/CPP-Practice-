#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int A,n,j,i;
	int A[n];
	cout<<"enter size of array \n";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cout<<"enter value at "<<i<<" location";
		cin>>A[i];
	}
		min=A[0];
		for(j= j=1;j<n;j++)
			{
				for(j=1; j<n; j++)
				{
					if(min<A[j])
				{
					min=A[j];
				}
				}
					A[i]=min;
			cout<<A[i];
			}
}
