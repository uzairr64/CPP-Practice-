#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int w_h;
	float b_s,m_a,h_r,fine,bonus,net_salary;
	cout<<"enter basic salary of Employee in Rupees"<<"\nRs.";
	cin>>b_s;
	cout<<"Enter Working Hours per day of Employee"<<"\n";
	cin>>w_h;
	if((w_h>10)&&(w_h<=24))
	      {
	      	bonus=(20*b_s)/100;
	      }
	      else 
		  if(w_h==10)
	      { 
		    bonus=(b_s*10)/100;
		  }
		  else
		  if((w_h>0)&&(w_h<10))
		  {
		    fine=(b_s*0.5)/100;
	}
	else
	{
	cout<<"Invalid Working Hours"<<"\n";
	exit(0);
	}
        	h_r=(40*b_s)/100;
	      	m_a=(30*b_s)/100;
	net_salary=b_s+bonus+h_r+m_a-fine;
	cout<<"Working hours per day of Employee\n"<<w_h<<"\n";
	cout<<"Bonus of Employee \nRs."<<bonus<<"\n";
	cout<<"House rent of Emloyee \nRs."<<h_r<<"\n";
	cout<<"Medical allounse of Employee \nRs."<<m_a<<"\n";
	cout<<"Net salary per Month of Employee \nRs."<<net_salary<<"\n";
	getch();
}
