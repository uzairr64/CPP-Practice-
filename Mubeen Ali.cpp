#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ int c,i,flag=1;
   cout<<"Enter any Integer";
   cin>>i;
   if (i==2)
  	 {
  	 	 cout<<"You Entered A Prime Number \t"<<i;
  	 	 exit(0);
  	 }
   if(i%2==0)
   	{
	   cout<<"You`ve Entered An Even Number";
	   exit(0);
   	}
    
   for(c=3;c<=i/29;c++)
  		{
    		  if(i%c==0)
      			{
      				cout<<"number is not a prime";
      				exit(0);
				  //	flag=0;
      			//	break;
	  			}
			 
	  		}

			cout<<"number is  a prime";
		
   getch();
}
