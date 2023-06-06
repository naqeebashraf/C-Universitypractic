#include<iostream>
using namespace std;

int main()
{
	int a=1;
	int b=2;
	int*ptr;
	
	ptr=&a;
	cout<<*ptr<<endl;
	ptr=&b;
	cout<<*ptr<<endl;
	//cout<<"addres of a is:"<<&a<<endl;
	//cout<<"addres of b is :"<<&b<<endl;
	return 0;
	
	
}
