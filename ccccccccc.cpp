#include<iostream>
using namespace std;
int main()
{
	int a,s,t,l;
	cout<<"enter yout salary=";
	cin>>a;
	if(a<600000)
	{
		cout<<"your salary is="<<a;
	}
	if(a>600000 && a<1200000)
	{
		cout<<a/100*2.5<<s;
	}
	if(a>1200000 && a<2400000)
	{
		cout<<a/100*5<<t;
	}
	if(a>2400000)
	{
		l=a/100*11;
		cout<<"your salary is ="<<a-l;
	}
	return 0;
}
