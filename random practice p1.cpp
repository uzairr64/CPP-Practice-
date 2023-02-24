#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"please enter a number"<<"\n";
	cin>>num;
	if(num>=0)
	{
		cout<<"the number is positive"<<num;
	}
	else
	{
		cout<<"the number is negative";
	}
	getch();
}
