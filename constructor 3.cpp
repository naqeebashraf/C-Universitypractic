#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		double inches;
	public:
		Distance()
		{
			feet=0;
			inches=0.0;
		}
		Distance(int n_feet,double n_inches)
		{
			feet=n_feet;
			inches=n_inches;
		}
		~Distance()
		{
			cout<<"system destroyed ....";
		}
		void getdistance()
		{
			cout<<"\nenter feet =";
			cin>>feet;
			cout<<"\nenter inches =";
			cin>>inches;
		}
		void showdistance()
		{
			cout<<"feet is ="<<feet<<endl;
			cout<<" inches is ="<<inches<<endl;
		}
};
int main()
{	
	Distance dist1(11,13.9);
	Distance dist2=dist1;
	Distance dist3=dist1;
	
	cout<<"\ndist1 =";
	dist1.showdistance();
	cout<<"\ndist2=";
	dist2.showdistance();
	cout<<"\dist3 =";
	dist3.showdistance();
	cout<<endl;
	return 0;
}
