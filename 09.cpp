#include<iostream>
using namespace std;
int table(int n);
int main()
{
	int n;
	cout<<"enter the number =";
	cin>>n;
	table(n);
}
int table(int n)
{
	for(int i=0;i<=10;i++)
	{
		cout<<n<<"x"<<i<<'='<<n*i<<endl;
	}
}
