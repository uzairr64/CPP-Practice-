#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int i,j,k;
    
    for(i=0;i<=3;i++)
    {
	
	  for (j=0;j<=i;j++)
	  { cout<<"*";
	  }
	  cout<<endl;
    
	}
	for(k=2;k>=0;k--)
	{  for(int l=0;l<=k;l++)
	   {
	    cout<<"*";
       }
	cout<<endl;
	}
	

   getch();
}
