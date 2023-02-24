#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,a;
	cin>>num;
	a=num;
	if(num==2)
	{
	cout<<num;
}
	else 
	if(num%2==0)
	{
	cout<<"evem";
}
	else
	if(num%2!=0)
	{
	cout<<"odd";
}
else
cout<<"invalid";
getch();

}
