#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"please enter first number"<<"\n";
	cin>>num1;
	cout<<"please enter second number"<<"\n";
	cin>>num2;
	cout<<"please enter third number"<<"\n";
	cin>>num3;
    	if((num1>num2)&&(num1>num3))
    	{
    	cout<<num1<<" is greatest";
        }
    	else
    	if((num2>num1)&&(num2>num3))
    	{
    	cout<<num2<<" is gretest";
        }
        else
        if((num3>num1)&&(num3>num2))
        {
        	cout<<num3<<" is greatest";
		}
	    else
	    if((num1==num2)&&(num3>num2))
	    {
		cout<<num3<<" is greatest";
	    }
	    else
	    if((num1==num3)&&(num1>num2))
	    {
	    cout<<num1<<" is greatest";
	    }
	    else
	    if((num1==num2)&&(num2>num3))
	    {
	    cout<<num2<<" is greatest";
		}
		else
		{
			cout<<"all are equal";
		}
	getch();
}
	    

