#include<iostream>
using namespace std;

class Food
{
	private:
		int price;
		int order;
		string item;
	public:
		Food()
		{
		
			item=" ";
				price=0;
			order=0;
		}
		Food(string i,int p,int o)
		{
			item=i;
			price=p;
			order=o;
		}
	
		void display_list()
		{
		
			cout<<"item is :"<<item<<endl;
				cout<<"price of item :"<<price<<endl;
			cout<<"order is :"<<order<<endl;
		}
};
class Pizza:public Food
{
	private:
	string flavour;
	public:
		Pizza()
		{
			flavour=" ";
		}
		Pizza(string i,int p,int o,string f):Food(i,p,o),flavour(f){
		}
		
			

		void display_list()
		{
			Food::display_list();
			cout<<"flavour of order is :"<<flavour<<endl;
		}
};

int main()
{
	Pizza p1("zalim pizza",1850,1,"psl special");
	p1.display_list();
}
	
		
	
