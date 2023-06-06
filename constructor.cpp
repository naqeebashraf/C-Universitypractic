#include<iostream>
using namespace std;

class distance{
	private:
		int feet;
		float inches;
	public:
		distance()
			{
				feet=0;
				inches=0.0;
			}
		distance(int fet,float in)
		{
			fet=feet;
			in=inches;
			}
		void getdistance()
		{cout<<"\nenter feet=";
		cin>>feet;
		cout<<"\nenter inches=";
		cin>>inches;
				}
		void showdistance()
		{cout<<feet<<"\'-"<<inches<<"\" "<<endl;
						}
		void adddistance(distance,distance);								
		
};
void distance::adddistance(distance d2,distance d3)
{
	inches=d2.inches + d3.inches;
	feet=0;
	if(inches>=12.0)
	{
		inches=12.0;
		feet++;
	}
	feet+=d2.feet + d3.feet;
}
int main()
{
	distance dist1,dist3;
	distance distance2(11,6.25);
	distance1.getdistance();
	distance3.adddistance(distance1,distance2);
	cout<<"\ndistance 1 =";
	distance1.showdistance();
	cout<<"\ndistance 2 =";
	distance2.showdistance();
	cout<<"\ndistance 3 =";
	distance3.showdistance();
	cout<<endl;
	return 0;
}
