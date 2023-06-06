#include<iostream>
using namespace std;
void num(int num);
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	num(n);
	return 0;
}
void num(int num)
{
	cout<<"successor is="<<num+1<<endl;
	cout<<"precessor is="<<num-1<<endl;
}
	
