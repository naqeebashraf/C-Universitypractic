#include<iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int emp_no;
	public:
	void get_data()
	{
		cout<<"enter the name :";
		cin>>name;
		cout<<"enter the emp no :";
		cin>>emp_no;
		}	
};

class Student
{
	private:
		string highest_dgree;
		int date_of_completion;
	public:
	void get_data()
	{
		cout<<"enter the highest dgree :";
		cin>>highest_dgree;
		cout<<"enter the date of completion :";
		cin>>date_of_completion;
		}	
};
class Scientist:private Employee,private Student
{
	private:
		int publication;
	public:
	void get_data()
	{
		Employee::get_data();
		cout<<"enter the publicatioin :";
		cin>>publication;
		Student::get_data();
		}	
};
class Manager:private Employee,private Student
{
	private:
		string title;
		int club_dues;
		public:
			void get_data()
			{
				Employee::get_data();
				cout<<"enter the title :";
				cin>>title;
				cout<<"enter the club dues :";
				cin>>club_dues;
				Student::get_data();
			}
};
class Labour:public Employee,public Student
{
	
};

int main()
{
	Labour l1;
	l1.Manager::get_data();
	return 0;
}
