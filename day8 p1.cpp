#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char alpha,a,z,A,Z;
	cout<<"Enter a Alphabet\n";
	cin>>alpha;
	if(((alpha>='a') && (alpha<='z') )&&( (alpha=='a') || (alpha=='e' )|| (alpha=='i' )|| (alpha=='o' )|| (alpha=='u')))
	{
		cout<<"You entered small vowel  letter "<<alpha;
	}
	else
	if(((alpha>='A') && (alpha<='Z') )&& ((alpha=='A' )||( alpha=='E' )||( alpha=='I' )|| (alpha=='O' )|| (alpha=='U')))
	{
	cout<<"You entered capital vowel lette r"<<alpha;
}
else
if(((alpha>='A') && (alpha<='Z') )&& ((alpha!='A') || (alpha=='E' )|| (alpha=='I' )|| (alpha=='O' )|| (alpha=='U')))
{
cout<<"NOT A VOWEL "<<alpha;
}
else
if(((alpha>='a') && (alpha<='z') )&&( (alpha!='a' )|| (alpha=='e' )|| (alpha=='i' )|| (alpha=='o' )|| (alpha=='u')))
{
	cout<<"NOT A VOWEL "<<alpha;
}
else
{
cout<<"invalid";
}
getch();
}
