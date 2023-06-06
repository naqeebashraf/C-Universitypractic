#include<iostream>
using namespace std;
int square(int a);
int cube(int b);
int main()
{
	int x,s,c;
	cout<<"enter the number =";
	cin>>x;
	s=square(x);
	c=cube(x);
	cout<<"final value ="<<5*(c+s);
	return 0;
	
}
int cube(int b)
{
	return b*b*b;
}
int square(int a)
{
	return a*a;
}

