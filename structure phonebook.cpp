#include<iostream>
using namespace std;
struct date{
	int d;
	int m;
	int y;
};
struct Phonebook{
	long int phone_no;
	char name[20];
	char city[10];
	date D;
};
int main()
{
	Phonebook P;
	cout<<"Enter Name: ";
	cin>>P.name;
	cout<<"Enter City: ";
	cin>>P.city;
	cout<<"Enter Date in format:  day month year: ";
	cin>>P.D.d>>P.D.m>>P.D.y;
	cout<<endl<<endl;
	cout<<"Name: "<<P.name<<endl;
	cout<<"City: "<<P.city<<endl;
	cout<<"Date:  "<<P.D.d<<":"<<P.D.m<<":"<<P.D.y;
	
}
