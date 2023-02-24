#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,sum,product,minus;
	float division,modulus;
	char op;
	cin>>num1;
	cin>>op;
	cin>>num2;
	switch(op)
	{
		case'+':
			sum=num1+num2;
			cout<<num1<<"+"<<num2<<"="<<sum;
			break;
		
		case'-':
		minus=num1-num2;
			cout<<num1<<"-"<<num2<<"="<<minus;
			break;
		case'*':
		product=num1*num2;
			cout<<num1<<"*"<<num2<<"*"<<product;
			break;
		case'/':
		division=(float)num1/num2;
			cout<<num1<<"/"<<num2<<"="<<division;
			break;
		case'%':
		modulus=num1%num2;
		    cout<<num1<<"%"<<num2<<"="<<modulus;
			break;
		default:
		cout<<"invalid";
		break;	
		}
	getch();
}
