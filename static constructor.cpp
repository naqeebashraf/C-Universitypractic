#include<iostream>
using namespace std;

class car
{
	private:
		static int quantity;
	public:
	car()
	{quantity++ ;}
			
		int getquantity()
		{	return quantity;	}
	
		
		
};
int car::quantity=0;

int main()
{
	car c1,c2,c3;
	

	c1.getquantity();
	c2.getquantity();
	c3.getquantity();
	cout<<endl;
	return 0;
}
