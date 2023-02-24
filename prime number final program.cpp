#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,i;
	cout<<"enter a number\n";
	cin>>num;
	if(num==2)
	{
		cout<<"num is prime";
	exit(0);
}
	if(num%2==0)
	{
		cout<<"num is even";
	exit(0);
	}
	for(i=3; i<=num-1; i++)
	{
	if(num%i==0)
	{
		cout<<"num is not prime";
		exit(0);
	}
}
	cout<<"num is prime";
	getch();
}
