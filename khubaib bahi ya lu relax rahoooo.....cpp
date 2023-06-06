#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int sap;
		string phone;
		string date ;
	public:
	Student()
	{
		name=" ";
		sap=0;
		phone=" ";
		date =" ";
		}
		Student(string n_name,int n_sap,string n_phone,string n_date)
		{
			name=n_name;
			sap=n_sap;
			phone= n_phone;
			date=n_date;
			}	
			~Student()
			{
				cout<<"system is destroyed ....";
			}
			void getstudent()
			{
				cout<<"\nenter the name=";
				cin>>name;
				cout<<"\nenter the sap=";
				cin>>sap;
				cout<<"\nenter the phone=";
				cin>>phone;
				cout<<"\nenter the date of birth=";
				cin>>date;
			}
			void showstudent()
			{
				cout<<"name is ="<<name<<endl;
				cout<<"sap is ="<<sap<<endl;
				cout<<"phone is ="<<phone<<endl;
				cout<<"date of birth is ="<<date<<endl;
			}
		
	
};

int main()
{
	Student s1;
	
	s1.getstudent();
	s1.showstudent();
	cout<<endl;
	return 0;
}
