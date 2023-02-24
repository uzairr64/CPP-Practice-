#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	int time,hour,min,sec,rem;
	char ch;
	do
	{
		
	cout<<"Enter a time in seconds: "<<endl;
	cin>>time;
	hour=time/3600;
	rem=time%3600;
	min=rem/60;
	sec=rem%60;
	cout<<"Hours"<<"\t"<<hour<<"\n"<<"MINUTES"<<min<<"\t"<<"SECONDS"<<"\n"<<sec;
	cout<<"DO U WANT TO RUN THE PROGRAMME AGAIN:"<<endl;
	cin>>ch;
}
while(ch=='y');
//	getch();
}
