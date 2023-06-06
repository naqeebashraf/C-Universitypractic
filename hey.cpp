#include<iostream>
using namespace std;

class A
{
	public:
		void displayFoo()
		{
			cout<<"hi"<<endl;
		}
};
class B:public A
{
	public:
		void displayFoo()
		{
			cout<<"hey"<<endl;
		}
};
class C:public A
{
	public:
		void displayFoo()
		{
			cout<<"hello"<<endl;
		}
};
class Multid:public B,public C
{
	public:
		void displayFoo()
		{
			B::displayFoo();
		}
};

int main()
{
	Multid m;
	m.displayFoo();
	
}


