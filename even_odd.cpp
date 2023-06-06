#include<iostream>
using namespace std;
int even_odd(int n);
main()
{
	int M;
	cout<<"Enter the number=";
	cin>>M;
	int b=even_odd(M);
	if(b==0)
	cout<<"you entered an even number:";
	else
	cout<<"you entered an odd number:";
}
int even_odd(int n)
{
	if(n%2==0)
	return 0;
	else
	return 1;
}
