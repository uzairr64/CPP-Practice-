#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	int time,hour,min,sec,rem;
	cin>>time;
	hour=time/3600;
	rem=time%3600;
	min=rem/60;
	sec=rem%60;
	cout<<"Hours"<<"\t"<<hour<<"\n"<<"MINUTES"<<min<<"\t"<<"SECONDS"<<"\n"<<sec;
	
	getch();
}
