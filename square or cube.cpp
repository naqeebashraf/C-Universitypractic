#include<iostream>
using namespace std;
int square (int a);
int cube (int b);
int main()
{
	int c,x,s;
	cout<<"enter the number:";
	cin>>x;
	c=cube(x);
	s=square(x);
	cout<<"final value ="<<5*(c+s)<<endl;
	return 0;
}
int cube (int b)
{
	return b*b*b;
}
int square (int a)
{
	return a*a;
}
