#include<iostream>
using namespace std;
void character (int n,char ch);
int main()
{
	int n;
	char ch;
	cout<<"enter the number =";
	cin>>n;
	cout<<"enter the character =";
	cin>>ch;
	character(n,ch);
}
void character (int n,char ch)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<ch;
	cout<<endl;
	}

}
