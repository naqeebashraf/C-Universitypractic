#include<iostream>
using namespace std;
void max(int num1,int num2);
int main()
{
	int a,b;
	cout<<"enter the number:";
	cin>>a>>b;
	max(a,b);
	return 0;
}
void max(int a,int b)
{
	if(a<b)
	cout<<"max is ="<<a<<endl;
	else
	cout<<"max is ="<<b<<endl;
}
