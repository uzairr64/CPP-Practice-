#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j,x;
	cin>>n;
	int A[n];
	for(i=0;i<n; i++)
	{
	
		
		cout<<"enter value at "<<i<<" location";
		cin>>A[i];
	}
x=A[0];
	for(i=0;i<n;i++)
	   {	
			if(x>A[i]);
				{
	
					x=A[i];
				}


		}
		cout<<"greatest"<<x;
	getch();
}

