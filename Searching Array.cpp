#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  
   int i,n,num,counter=0;
   int A[n];
    cout<<"Enter size of array \n";
    cin>>n;
    cout<<"\n Enter values of array \n";
    for(i=0;i<=n;i++)
    {
	   cout<<"Enter Value at    "<<i<<"   location \n";
       cin>>A[i];
	}
	   cout<<" Enter a number you want to find \n";
	   cin>>num;
	  for(i=0;i<=n;i++)
		{
			if(num==A[i])
			{ 
			  cout<<"\n Value is at    "<<i<<"    location \n";
			  counter++;
			}
		}
		       if(counter==0)
		       {
		       	cout<<"Number Not Found \n";
			   }
			       else
			  	   { 
			             cout<<"Number  "<<num<<"   is    "<<counter<<"   times";
			   	   }
		getch();
}
