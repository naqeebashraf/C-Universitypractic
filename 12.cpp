#include<iostream>
using namespace std;

class Car{
	private:
		static int count;
	public:
	int getcar()
	{
		count++;
		cout<<count<<endl;
		}	
};
int Car::count=0;
int main()
{
	Car c1,c2,c3;
	c1.getcar();
}
