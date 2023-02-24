#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	int A[n];
	cout<<"enter size of array\n";
	cin>>n;
	for(i=0; i<n; i++)
	{
	cout<<"enter value at "<<i<<" location\n3";
	cin>>A[i];
	sum=sum+A[i];	
	}
	cout<<"sum of array = "<<sum;	
	getch();
}
