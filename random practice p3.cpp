#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"please enter book number";
	cin>>num;
	if(100>num>50)
	{
		cout<<"book is in cupboard A";
	}
	else
	if(0<num<50)
	{
		cout<<"book is in cupboard B";
	}
	else
	cout<<"book is not in our library";
	getch();
}
