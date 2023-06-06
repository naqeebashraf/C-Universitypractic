#include<iostream>
using namespace std;

class por
{
	public:
		por()
		{
			cout<<"gi"<<endl;
		}
		por(float a)
		{
			cout<<a<<endl;
		}
		~por()
		{
			cout<<"dustin"<<endl;
		}
};
class hor:public por
{
	public:
		hor()
		{
			cout<<"gi"<<endl;
		}
		hor(float a,int b):por(a)
		{
			cout<<b<<endl;
		}
		hor(int a,float b)
		{
			cout<<a<<endl;
		}
		~hor()
		{
		cout<<"tall"<<endl;	
		}
		
};

class tor:public hor ,public por
{
	public :
		tor()
		{
			cout<<"gi"<<endl;
		}
		tor(char m)
		{
			cout<<"xor"<<endl;
		}
		~tor()
		{
			cout<<"wild"<<endl;
		}
		
};

int main()
{
	hor* p1=new hor(40.5,6);
	por* p2=new por(6.9);
	delete p1;
	tor* p3=new tor('a');
	delete p2;
	
}
