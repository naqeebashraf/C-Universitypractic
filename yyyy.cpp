#include<iostream>
using namespace std;

int main()
{
	char var1='A';
	char var2='G';
	
	char* ptr;
	ptr=&var1;
	cout<<*ptr<<endl;
	ptr=&var2;
	cout<<*ptr<<endl;
	return 0;
}
