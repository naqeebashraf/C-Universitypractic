#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"tree"<<endl;
		}
		A(string a)
		{
			cout<<"mango"<<endl;
		}
		A(int a)
		{
			cout<<"hupo"<<endl;
		}
		~A()
		{
			cout<<"DD"<<endl;
		}
};
int main()
{
	A a1= A("gun");
	A a2= A(6);
	A a3=A(4);
	A a4;
	A a5(5);
	
	
}
