#include<iostream>
using namespace std;
int main()
{
	int num1,A=0;
	cout<<"check the number is prime or not \n:";
	cout<<"enter the number:";
	cin>> num1;
	for(int a=1;a<=num1;a++)
	{
		if(num1%a==0)
		{
			A++;
		}
	}
	if(A==2)
	{
		cout<<"this is  prime number:";
	}
	else
	{
		cout<<"this is not prime number:";
	}
	return 0;
	
}
