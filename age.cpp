#include<iostream>
using namespace std;
int main()
{
	int age[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter age=";
		cin>>age[i];
	}
	for(int b=0;b<5;b++)
	{
		cout<<age[b]<<"\t";
	}
	return 0;
}
