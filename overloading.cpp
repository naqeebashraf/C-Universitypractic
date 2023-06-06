
#include<iostream>
using namespace std;

void display(int var1,double var2)
{
	cout<<"int value is"<<var1;
	cout<<"double value is "<<var2<<endl;
}
void display(double var)
{
	cout<<"double is "<<var<<endl;
}
void display(int var)
{
	cout<<"int is"<<var<<endl;
}

int main()
{
	int a=5;
	double b=5.5;
	
	display(a);
	display(b);
	display(a,b);
}
