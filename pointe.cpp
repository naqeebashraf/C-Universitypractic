#include<iostream>
using namespace std;

int main()
{
	void centimize(double*);
	
	double var=10.0;
	cout<<"var ="<<var<<"inches"<<endl;
	centimize(&var);
	cout<<"var ="<<var<<"centimeter"<<endl;
	return 0;
}

