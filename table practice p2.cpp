#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,c;
	cin>>num1;
	cin>>num2;
	for (c=1; c<=5; c++)
	{
		cout<<num1<<"*"<<c<<"="<<num1*c<<"\n";
	}
	for (c=1; c<=5; c++)
	{
		cout<<num2<<"*"<<c<<"="<<num2*c<<"\n";
	}
	getch();
	
}
