#include<iostream>
using namespace std;

class Toy
{
	private:
		string name;
		int price;
	public:
	Toy()
	{
		name=" ";
		price=0;
		}	
		Toy(string n,int p)
		{
			name=n;
			price=p;
		}
		void display_list()
		{
			cout<<"name of toy is :"<<name<<endl;
			cout<<"price of toy is :"<<price<<endl;
		}
};

class Gun:public Toy
{
	private:
		string quality;
	public:
	Gun()
	{
		quality=" ";
		}
		Gun(string n,int p,string q):Toy(n,p),quality(q){
		}
		void display_list()
		{
			Toy::display_list();
			cout<<" the bullet quality is :"<<quality<<endl;
			}	
};

int main()
{
	Gun g1("30 boor",650,"good");
	g1.display_list();
	

}
