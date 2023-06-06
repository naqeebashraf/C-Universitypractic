#include<iostream>
using namespace std;
int factorial(int num);
int main()
{
	int fact, a;
	cout<<"enter any number :";
	cin>>a;
	fact=factorial(a);
	cout<<"factorial of a number is :"<<fact<<endl;
	return 0;
}
int factorial(int a)
{
	if (a<0)
	return(0);
	if(a==0)
	return(1);
	else
	return(a*factorial(a-1));
}
