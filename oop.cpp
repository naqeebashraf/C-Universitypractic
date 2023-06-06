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
			cout<<feet<<"\"."<<inches<<"\".";
		}
};
