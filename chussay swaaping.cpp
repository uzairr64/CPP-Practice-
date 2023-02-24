#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,c,b;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<a<<b;
	getch();
}
