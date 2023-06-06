#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int number=0;
	do
	{
		sum += number;
		cout<<"enter the number";
		cin>>number;
	}
	while(number>=0);
	
	cout<<"\nThe number is"<<sum<<endl;
	return 0;
}
