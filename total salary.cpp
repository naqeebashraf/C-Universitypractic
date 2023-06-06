#include<iostream>
using namespace std;
int main()
{
	int salary;
	float total;
	cout<<"Enter salary=";
	cin>>salary;
	if(salary>=20000)
	total=salary-(salary*7.0/100.0);
	else if(salary>=10000)
	total=salary-1000;
	else
	salary=total;
	cout<<"Your total salary="<<total;
	return 0;
}
