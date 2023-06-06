#include<iostream>
using namespace std;
int table (int num);
int main()
{
	int n,i;
	cout<<"enter a number =";
	cin>>n;
	table(n);
	return 0;
}
int table (int n  )
{
		for (int i= 1; i<= 10; ++i)
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
