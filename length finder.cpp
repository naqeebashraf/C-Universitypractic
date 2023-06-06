#include<iostream>
using namespace std;
int main()
{
	int length ,angle,radius;
	cout<<"Enter the angle of arc :";
	cin>>angle;
	cout<<"Enter the radius of arc :";
	cin>>radius;
	length=radius*angle;
	cout<<" length of arc :"<<length<<endl;
	return 0;
}
