#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int n=1;
	for(int i=7; i>=1; i=i-2)
	{
		cout<<setw(n);
		n++;
		for(int j=i; j>=1; --j)
		{
	     	cout<<"*";
	    
	    }   
	    cout<<endl;
    }
	   getch();
}
