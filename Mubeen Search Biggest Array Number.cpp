#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int j,n,i,f;
    int A[n];
   
   cout<<"Enter Size Of Array  \n";
   cin>>n;
   for(i=0;i<n;i++)
    {  
        cout<<"Enter Value In Location   "<<i<<"     ";
        cin>>A[i];
  	} 
f=A[0];
  	 //for(x=0;x<n;x++)
  	   // {
		 for(j=1;j<n;j++)
		    {
		 	if(A[j]>f)
		 	 {
		 	 	f=A[j];
			 }
		   }  
	    //}
	    cout<<"Greatest Value Is      "<<f;
		   getch();
  
}
