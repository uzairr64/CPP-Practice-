#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int n=4;
//	setw(n);
//	cout<<setw(n);
	
	for(int i=1; i<=7; i=i+2)
	{
	    cout<<setw(n);
		n--;
		for(int j=1; j<=i; j++)
		
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	getch();
}
