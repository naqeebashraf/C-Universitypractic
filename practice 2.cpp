#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int rollno;
		Student *ptr;
	public:
		Student()
		{
			name=" ";
			rollno=0;
		}
		Student(string n_name,int n_rollno)
		{
			name=n_name;
			rollno=n_rollno;
		}
		void getstudent()
		{
			ptr= new Student[3];
			for(int i=0;i<3;i++)
			{
				cout<<"enter the name=";
				cin>>ptr[i].name;
				cout<<"enter the rollno=";
				cin>>ptr[i].rollno;
			}
		}
		void displaystudent()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"name is ="<<ptr[i].name<<endl;
				cout<<"rollno is ="<<ptr[i].rollno<<endl;
			}
		}
		
};

int main()
{
	Student s1;
	s1.getstudent();
	s1.displaystudent();
}
