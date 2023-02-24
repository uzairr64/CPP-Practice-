#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter any number \n";
	cin>>num;
	for(i=1; i<=num; i++)
	{
		if(i*i==num)
		{
		cout<<"Number is perfect square";
		exit(0);
	}
}
 cout<<"Not A Perfect square";
	getch();
	
}
