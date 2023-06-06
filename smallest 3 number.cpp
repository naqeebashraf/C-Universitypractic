#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 3 number=";
	cin>>a>>b>>c;
	if(a<b)
	if(a<c)
	{
		cout<<"Smallest number is a="<<a;
	}
	else
	{
		cout<<"Smallest number is c="<<c;
	}
	else
	if(b<c)
	{
		cout<<"Smallest number is b="<<b;
	}
	else
	{
		cout<<"Smallest number is c="<<c;
	}
	return 0;
}
