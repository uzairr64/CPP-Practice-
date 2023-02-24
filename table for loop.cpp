#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,num, product;
	cin>>num;
	
	for(n=0; n<=10; n++)
	{
		cout<<num<<"*"<<n<<"="<<num*n<<"\n";
	}
	getch();
}
