#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter the marks=";
	cin>>a>>b>>c>>d;
	if(a>=85)
	{cout<<"marks are a=";}
	else if(b>=70)
	{cout<<"marks are b=";}
	else if(c>=60)
	{cout<<"marks are c=";}
	else if(d>=50)
	{cout<<"marks are d=";}
	else
	{cout<<"less than 50 is fail=";}
	return 0;
}
