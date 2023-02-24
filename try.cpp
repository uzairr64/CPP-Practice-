#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter a number\n";
    cin>>num;
    for(i=1; i<=num; i++)
    {
        if(i*i==num)
        {
            cout<<"perfect";
            exit(0);
        }
    }
    cout<<"not a perfect square";
}