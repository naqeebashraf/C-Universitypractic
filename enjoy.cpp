#include<iostream>
using namespace std;

class Car
{
	private:
		string name;
	public:
	void getCar()
	{
		cout<<"enter the name :";
		cin>>name;
		}	
		void displayCar()
		{
			cout<<"name is :"<<name<<endl;
		}
};
class Company:public Car
{
	private:
		int quantity;
		public:
			void getCompany()
			{
				Car::getCar();
				cout<<"enter the quantity:";
				cin>>quantity;
			}
			void displayCompany()
			{
				Car::displayCar();
				cout<<"quantity is :"<<quantity<<endl;
			}
};
int main()
{
	Company c1;
	c1.getCompany();
	c1.displayCompany();
}
