#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int i,num;
   cout<<"Enter any number \t";
   cin>>num;
   for(i=2;i<=num/2;i++)
     if(i*i==num)
     { cout<<"It is a perfect square of \t"<<i;
	    exit(0);
	 }
	 cout<<"It is not a perfect square";
	 
}
