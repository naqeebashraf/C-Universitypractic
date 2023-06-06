#include<iostream>
using namespace std;
void table(int num);
int main()
{
	int a;
	cout<<"table of number :"<<endl;
	cout<<"enter the number :"<<endl;
	cin>>a;
	table(a);
	return 0;
}
void table(int a)
{
	for(int i=1;i<=10;++i)
	{
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
	}
}


