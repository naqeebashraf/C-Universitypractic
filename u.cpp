#include<iostream>
using namespace std;
int even_odd(int n);
int main()
{
	int n;
	cout<<"enter the number=";
	cin>>n;
	even_odd(n);
	if(n==0)
	{
		cout<<"number is even =";
	}
	else if(n%2==1)
	{
		cout<<"number is odd=";
	}
}
int even_odd(int n)
{
	return 0;
}
