#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,num,z,x=0;
	int A[n];
	cout<<"enter size of array\n";
	cin>>n;
	for(i=0; i<=n; i++)
	{
		cout<<"enter value at "<<i<<" location\n";
		cin>>A[i];
    }
        cout<<"enter value you want to find\n";
         cin>>z;
         for(i=0; i<=n; i++)
        {
              if(A[i]==z)
           {
		
		       cout<<"you enter number at location    "<<i<<"\n";
	
	           x=x+1;
            }

        }
	         cout<<"you`ve entered findable number "<<x<<" times";

		getch();
}
