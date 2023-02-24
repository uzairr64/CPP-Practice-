#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d,e,average,product,sum;
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;
	cout<<"enter value of c=";
	cin>>c;
	cout<<"enter value of d=";
	cin>>d;
	cout<<"enter value of e=";
	cin>>e;
	average=(a+b+c+d+e)/5;
	product=a*b*c*d*e;
	sum=a+b+c+d+e;
	cout<<"average="<<average<<"\n";
	cout<<"product="<<product<<"\n";
	cout<<"sum="<<sum<<"\n";
	cout<<"average of "<<a<<","<<b<<","<<c<<","<<d<<" and "<<e<<"="<<average<<"\n";
	cout<<"product of "<<a<<","<<b<<","<<c<<","<<d<<" and "<<e<<"="<<product<<"\n";
	cout<<"sum of "<<a<<","<<b<<","<<c<<","<<d<<" and "<<e<<"="<<sum<<"\n";
	getch();
	
}
