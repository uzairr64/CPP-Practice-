#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int j,n,i,min,temp=0;
    int A[n];
   
   cout<<"Enter Size Of Array  \n";
   cin>>n;
   for(i=0;i<n;i++)
    {  
        cout<<"Enter Value In Location   "<<i<<"     ";
        cin>>A[i];
  	} 
  	
  	  for(i=0;i<n;i++)
  	   {
  	   	    min=A[i];
  	   	 for(j=i+1;j<n;j++)
  	   	   {
  	   	   	        if(A[j]<min)
  	   	   	       {
  	   	   	    	    min=A[j];
  	   	   	    	    
		       		}
		    }
			 temp=A[i];
			 A[j]=temp;
			 A[i]=min;
       }
       
      for(i=0;i<n;i++)
       {
       	cout<<A[i]<<" \t";
	   }
}
