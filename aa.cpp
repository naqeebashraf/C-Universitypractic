#include<iostream>
using namespace std;
void fprime(int);
int main()
{
	int i,j;
	cout<<"enter the number =";
	cin>>j;
	fprime(j);
}
void fprime(int a)
{
	int ans=0;
	for(int i=2;i<a;++i)
	{
		if(a%i==0)
	{
		ans=1;
		break;
		}	
	}
	if(ans==1)
	{
		cout<<"ti is not prime number=";
	}
	else
	{
		cout<<"it it is prime number =";
	}
}
