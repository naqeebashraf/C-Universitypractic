#include<iostream>
using namespace std;

class Vehical
{
	private:
		string color;
		protected:
			string type;
		public:
			Vehical()
			{
				color=" ";
			}
			Vehical(string n_color)
			{
				color=n_color;
			}
			~Vehical()
			{
				cout<<"system ended=";
			}
			void getcolor()
			{
				cout<<"enter the color";
				cin>>color;
			}
			void displaycolor()
			{
				cout<<"color is"<<color;
			}
};

class Car: public Vehical
{

public:
	void gettype(string n_type)
	{
		type=n_type;
	}
	void displaytype(string color)
	{
		cout<<"type is ="<<type;
		cout<<"color is ="<<color;
	}
};

int main()
{
	Car c1;

	c1.gettype("honda");
	c1.displaytype("pink");
	cout<<endl;
}
