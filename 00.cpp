#include<iostream>
using namespace std;
int main()
{
	int age[5];
	int i;
	for(int i=0;i<=5;++i)
	{
		cout<<"enter the age of students =";
		cin>>age[i];
	}
	cout<<"values are =";
	for(int i=0;i<=5;++i)
	{
		cout<<age[i]<<endl;
	}
	return 0;
}
