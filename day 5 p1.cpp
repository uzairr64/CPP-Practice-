#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	float area_of_square, area_of_circle, l,r,p=3.14;
	cout<<"please enter a valid number"<<"\n";
	cin>>num;
	if(num==1)
	{
		cout<<"please enter lenth of square"<<"\n";
		cin>>l;
		area_of_square=l*l;
		cout<<"area of square="<<area_of_square;
	}
	else
	if(num==2)
	{
		cout<<"please enter radius of circle"<<"\n";
		cin>>r;
		area_of_circle=p*(r*r);
		
		cout<<"area of circle="<<area_of_circle;
	}
	else
	{
		cout<<"please enter a valid number";
	}
}
