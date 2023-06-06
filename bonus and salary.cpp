#include<iostream>
using namespace std;
int main()
{
	int s,g,b;
	cout<<"enter the salary=";
	cin>>s;
	cout<<"enter the grade=";
	cin>>g;
	if(g>15)
	{b=s*(500.0/100.0);}
	else
	{b=25.0/100.0;}
	cout<<"total salary="<<s+b;
	return 0;
	
}
