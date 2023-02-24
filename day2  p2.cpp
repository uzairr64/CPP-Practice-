#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float l,w,a,p;
	cout<<"enter lenght"<<"\n";
	cin>>l;
	cout<<"enter width"<<"\n";
	cin>>w;
	a=l*w;
	p=l+w+l+w;
	cout<<"area of rectangle="<<a<<"\n";
	cout<<"perimeter of rectangle="<<p;
	getch();
}
