#include<iostream>
using namespace std;

class distance
{
	private :
		int feet;
		float inches;
	public:
		void setdistance(int ft,float in)
		{
			feet=ft;
			inches=in;
		}
		void getdistance()
		{
			cout<<"\n enter feet :";
			cin>>feet;
			cout<<"\n enter inches :";
			cin>>inches;
		}
		void showdistance()
		{
			cout<<feet<<"\"-"<<inches<<"\"-";
		}
};

int main()
{
	distance distance1,distance2;
	distance1.setdistance(11,40.8);
	distance2.getdistance();
	
	cout<<"\n d1=";
	distance1.showdistance();
	cout<<"\n d2=";
	distance2.showdistance();
	return 0;
}
