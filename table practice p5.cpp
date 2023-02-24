#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,c,c2;
	cout<<"please enter first number\n";
	cin>>num1;
	cout<<"please enter second number\n";
	cin>>num2;
	c2=10;
	for (c=1; c<=5; c++)
	{
			cout<<num1<<"*"<<c<<"="<<num1*c<<"\n";
		cout<<num2<<"*"<<c2<<"="<<num2*c2<<"\n";
		c2--;
	}
	getch();
}
