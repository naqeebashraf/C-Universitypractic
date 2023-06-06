#include<iostream>
using namespace std;
void max(int a,int b,int c,int d);
int main()
{
	int a,b,c,d;
	cout<<"enter the number =";
	cin>>a>>b>>c>>d;
	max(a,b,c,d);
}
void max(int a,int b,int c,int d)
{
	if((a<b)&&(c < d))
	{
		cout<<"maximum number is "<< a<<b<<endl;
	}
	else 
	{
		cout<<"maximum is ="<<c<<d<<endl;
	}
}

