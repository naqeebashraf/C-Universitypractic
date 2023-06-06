#include<iostream>
using namespace std;
class Sum
{
	public:
	int sum(int a ,int b)
{
	cout<<"sum is :"<<a+b;
}
int sum (int a ,int b,int c)
{
	cout<<"sum is :"<<a+b+c;
}
};
int main()
{
	Sum s1;
	int a=2;
	int b=3;
	int c=7;
	int sum =s1.sum(a,b,c);
	return 0;
}
