#include<iostream>
using namespace std;


class Car
{
	private:
		static int num;;
	public:
		int getcar()
		{
			num++;
			cout<<num<<endl;
		}
		
};
int Car::num=0;

int main()
{
	Car c1,c2,c3;
	c1.getcar();
	c2.getcar();
	c3.getcar();
}
