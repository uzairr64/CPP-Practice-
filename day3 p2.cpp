#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int time,rem,week,day,hour;
cin>>time;
week=time/168;
rem=time%168;

day=rem/24;
hour=rem%24;
cout<<"day"<<day<<"week"<<week<<"hour"<<hour;
getch();
}
