#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks;
	cout<<"enter marks of a student"<<"\n";
	cin>>marks;
	if(marks>=90)
	{
		cout<<"student pass with "<<marks<<" marks"<<" and A+ Grade";
	}
	else
	if(marks>=40)
	{
		cout<<"student pass with "<<marks<<" marks";
	}
	else
	cout<<"student is fail";
	getch();
}
    
