#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	char ch,r;
	cout<<"Enter two number=";
	cin>>a>>b;
	cout<<"press '+' To ADD"<<endl;
	cout<<"press '-' To Subtract"<<endl;
	cout<<"press '*' To Multiply"<<endl;
	cout<<"press '/' To Divide"<<endl;
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<"sum of two numbers ="<<a+b<<endl;
			break;
		case '-':
			cout<<"subtraction of two numbers="<<a-b<<endl;
			break;
		case '*':
			cout<<"multiplication of two numbers="<<a*b<<endl;
			break;
		case'/':
			if(b==0)
			{cout<<"math error"<<endl;}
			else
			{cout<<"division of two numbers ="<<a/b<<endl;
			break;
		default:
			cout<<"your enter a wrong operator"<<endl;
	
loop:
	cout<<"IF YOU WANT TO RUN AGAIN THAN PRESS Y OTHERWISE PRESS N =";
	cin>>r;
	if(r=='Y'|| r=='y')
	{goto loop;}
	else if (r=='N'|| r=='n')
	cout<<"Your program end";
	else
	{cout<<"you enter wrong character"<<endl;
	goto loop;}
	return 0;
}


