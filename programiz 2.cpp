#include<iostream>
using namespace std;

class Animal
{
	private:
		string color;
	protected:
		string type;
		public:
			void eat()
			{
				cout<<"i can eat ...."<<endl;
			}
			void sleep()
			{
				cout<<"i can sleep ..."<<endl;
			}
			void setcolor(string clr)
			{
				color=clr;
			}
			string getcolor()
			{
				return color;
			}
};

class Dog:public Animal
{
	public:
		void setdog(string typ)
		{
			type=typ;
		}
		void displaydog(string c)
		{
			cout<<"i am a "<<type<<endl;
			cout<<"my color is "<<c<<endl;
		}
		void bark()
		{
			cout<<"i am bark like woof woof ....";
		}
};

int main()
{
	Dog d1;
	d1.eat();
	d1.sleep();
	d1.setcolor("black");
	
	d1.bark();
	d1.setdog("mamaml");
	d1.displaydog(d1.getcolor());
}
