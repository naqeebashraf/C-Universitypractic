#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter the  number";
	cin>> number;
	if(number>0)
	{
		cout<<"You enter the positive number";
	}
	else if(number<0)
	{
		cout<<"You enter the negative number";
	}
	else
	{
	cout<<"You enterd the number is 0"<<endl;
	}
	return 0;
}
