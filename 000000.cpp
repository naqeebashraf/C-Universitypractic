#include<iostream>
using namespace std;

int main()
{
	int a=2;
	int b=3;
	
	int* ptr;
	
	cout<<"value of a is :"<<&a<<endl;
	cout<<"value of b is :"<<&b<<endl;
	
	ptr = &a;
	cout<<"value is :"<<*ptr<<endl;
}
