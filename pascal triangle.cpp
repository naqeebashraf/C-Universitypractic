#include<iostream>
using namespace std;
long factorialnum(int number)
{
	long factorial=1;
	for(int i=1;i<= number;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
int main()
{
	int i,j,number;
	cout<<"\n please enter number=";
	cin>>number;
	for(i=0;i<number;i++)
	{
		for(j=0;j<=(number-i-2);j++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<factorialnum<<" "<<endl;
		}
		cout<<"\n";
	}
	return 0;
}

