#include<bits/stdc++.h>
using namespace std;
int factorial(int l)
{
	int f=1;
	for(int i=1;i<=l;i++)
	{
		f=f*i;
	}
	return f;
}
void sum(int l)
{
	int x=l;
	int t,lt,total;
	for(int i=2;i<=16;i+=2)
	{
		t=pow(x,i)/factorial(i);
	}
	for(int i=3;i<=16;i+=2)
	{
		lt=pow(x,i)/factorial(i);
	}
	t=t+x;
	total=t-lt;
	cout<<total;
	lt=pow(x,i)/factorial(i);
}
t=t+x;
total=t-lt;
cout<<total;

{
	
int main()	
{
	int m;
	cout<<"enter a number=";cin>>m;
	sum(m);
}
	retrun 0;
}
