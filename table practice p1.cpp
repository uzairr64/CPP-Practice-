#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,n;
	cin>>num1;
	cin>>num2;
	for(n=0; n<=5; n++)
	{
	cout<<num1<<"*"<<n<<"="<<num1*n<<"\n";
}
    for(n=0; n<=5; n++)
    {
    	cout<<num2<<"*"<<n<<"="<<num2*n<<"\n";
	
}
getch();
}
