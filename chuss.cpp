#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,c,c2;
	cin>>num1;
	cin>>num2;
	for(c=1; c<=5; c++)
	for(c2=5; c2>=1; c2--)
	{
		cout<<num1<<"*"<<c<<"="<<num1*c<<"\n";
		cout<<num2<<"*"<<c2<<"="<<num2*c2<<"\n";
	}
	getch();
}
