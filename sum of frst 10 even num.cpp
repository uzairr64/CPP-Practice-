#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,c,a,sum;
	cin>>num;
	a=num;
		if(num%2==0)
		{
			for(c=0; c<10; c++)
			{
		a=a+2;
		cout<<a<<endl;
		sum=sum+2;
	}
	cout<<sum<<endl;
	}
		else
		{
			
			for(c=0; c<10; c++)
			{
		sum=sum+a;
		cout<<a<<endl;
		a=a+1;
	}
	cout<<sum;
	}
	getch();
	
}
