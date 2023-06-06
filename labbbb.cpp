#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int sap;
		string phone;
		string dob;
		static int count;
	public:
		Student()
		{
			name=" ";
			sap=0;
			phone=" ";
			dob=" ";
			cout<<"Default constructor";
		}
		Student(string n_name,int n_sap,string n_phone,string n_dob)
		{
		
			name=n_name;
			sap=n_sap;
			phone=n_phone;
			dob=n_dob;
			cout<<"parameterize constructor 1";
		}
		Student(string n_name,string n_dob,string n_phone,int n_sap)
		{
			name=n_name;
			dob=n_dob;
			phone=n_phone;
			sap=n_sap;
			cout<<"paramterize constructor 2";
		}
		
		
		~Student()
		{
			cout<<" destructor "<<count;
			count ++;
		}
		void getstudent()
		{
			cout<<"enter the name=";
			cin>>name;
			cout<<"enter the sap=";
			cin>>sap;
			cout<<"enter  the phone=";
			cin>>phone;
			cout<<"enter the dob=";
			cin>>dob;
		}
		void displaystudent()
		{
			cout<<"name is ="<<name <<endl;
			cout<<"sap is ="<<sap<<endl;
			cout<<"phone is ="<<phone<<endl;
			cout<<"dob is ="<<dob<<endl;
			
		}
};
int Student::count =0;

int main()
{
//	Student s1;
	Student s1,s2("naqeeb",465,"78","hf"),s3("naqeeb","090909","lahore",48680);
	//s1.getstudent();
	//s1.displaystudent();
	s3.displaystudent();
	s2.displaystudent();
	cout<<endl;
	return 0;
}
