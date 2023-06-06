#include<iostream>
using namespace std;

class car
{
	public:
	 int n;
		car()
		{
			static int num=0;
			num++;
			cout<<num<<endl;
		}
		

};

 
int main()
{
	car c1,c2,c3;

	
}


