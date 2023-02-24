#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{   int i,j,k;
    int n=4;
    int e=2;
    for(i=0;i<=3;i++)
    {
    	cout<<setw(n);
    	n--;
	  for (j=0;j<=i;j++)
	  { cout<<"*";
	  }
	  cout<<endl;
    
	}
	for(k=2;k>=0;k--)
	{
	cout<<setw(e);
	e++; 
	 for(int l=0;l<=k;l++)
	   {
	    cout<<"*";
       }
	cout<<endl;
	}
	

   getch();
}
