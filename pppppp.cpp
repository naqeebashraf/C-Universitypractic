#include<iostream>
using namespace std;
void character(int num,char n1);
int main()
{
	int n;
	char ch;
	cout<<"enter a number =";
	cin>>n;
	cout<<"enter a character =";
	cin>>ch;
	character( n,ch);
	return 0;
}
void character(int n,char n1)
{
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		cout<<n1;
		cout<<endl;
	}
}
