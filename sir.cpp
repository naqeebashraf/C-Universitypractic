#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	int *ptr_a=&a;
	ptr_a=&b;
	cout<<"value of a is :"<<*ptr_a;
	cout<<"addres of a is :"<<&a<<endl;
	*ptr_a=20;
	cout<<"addres of a is :"<<a<<endl;
	return 0;
}
