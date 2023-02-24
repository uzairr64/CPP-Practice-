#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,c;
	cout<<"please enter first number\n";
	cin>>num1;
	cout<<"please enter second number\n";
	cin>>num2;
	for(c=1; c<=5; c++)
	{
		cout<<num1<<"*"<<c<<"="<<num1*c<<"\n";
	}
	for(c=5; c>=1; c--)
	{
		cout<<num2<<"*"<<c<<"="<<num2*c<<"\n";
	}
	getch();
}
