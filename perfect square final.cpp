#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,i;
	cin>>num;
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		cout<<"perfect";
		
	}
	getch();
	
}
