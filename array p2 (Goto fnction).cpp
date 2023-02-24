#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i;
	int A[n],num,x=0,a=3;
	cout<<"enter size of array\n";
	cin>>n;
	for(i=0; i<=n; i++)
		{
			uzairji:
			cout<<"enter number at "<<i<<" location\n";
			cin>>num;
			if(num%2==0)
				{
					A[i]=num;
				}
			else
				{
					cout<<" sorry you enter odd number \n try again\n";
					
					
					if(x<3)
					{
						cout<<"you have  "<<a<<"  attempt\n";
						a--;
						x++;
				    }
				    else
				    {
				    	exit(0);
					}
				
					
					goto uzairji;
				}
    	}
    getch();
}
