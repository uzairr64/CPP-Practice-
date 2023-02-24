#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,min,j,n;
	int temp;
	int x;
	cout<<"enter size of array = ";
	cin>>n;
	
	int A[n];
	for(i=0; i<n; i++)
	{
		cout<<"enter value at "<<i<<" location =  ";
		cin>>A[i];
	}
		for(i=0; i<n; i++)
		{
	         min=A[i];
		
			for(j=i+1; j<n; j++)
			{
				if(min>A[j])
				{
					min=A[j];
					x=j;
					
				}
				
			}
			if(min!=A[i])
			{
				temp=A[i];
				A[i]=min;
				 A[x]=temp;
			}
		}
		cout<<"after sorting = ";
		for(int i=0; i<n;i++)
		{
			cout<<A[i]<<" ";
		}
		
		getch();
	
}
