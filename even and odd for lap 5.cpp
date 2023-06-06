#include<iostream>
using namespace std;
int even_odd(int n);
int main()
{
	int M;
	cout<<"enter a number :";
	cin>>M;
	 int b=even_odd(M);
	 if(b==0)
	 cout<<"you enter number is an even number:";
	 else
	 cout<<"you enter number is odd number :";
	 return 0;
}
int even_odd(int n)
{
	if(n%2==0)
	return 0;
	else
	return 1;
}
