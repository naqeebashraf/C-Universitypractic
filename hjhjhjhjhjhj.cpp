#include<iostream>
using namespace std;
void show(int num);
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	show(n);
	return 0;
}
void num(int n)
{
	cout<<"precessor is="<<++n<<endl;
	cout<<"successor is="<<n-2<<endl;
}
	
