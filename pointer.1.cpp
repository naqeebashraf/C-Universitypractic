#include<iostream>
using namespace std;

int main()
{
	int var1=11;
	int var2=22;
	
	
	cout<<&var1<<endl;
	cout<<&var2<<endl;
	int*iptr;
	iptr=&var1;
	cout<<*iptr<<endl;
	iptr=&var2;
	cout<<*iptr<<endl;
	
	
	
	return 0;
}
