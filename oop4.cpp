#include<iostream>
using namespace std;
class student
{
	private:
		int age;
		float gpa;
		string name;
		int rollno;
	public:
		void set_student(int n_age,float n_gpa,string n_name,int n_rollno)
		{
			n_age=age;
			n_gpa=gpa;
			 n_name=name;
			 n_rollno=rollno;
			 
			 
		}
		void get_student()
		{
			cout<<"\n enter age=";
			cin>>age;
			cout<<"\nenter gpa=";
			cin>>gpa;
			cout<<"\nenter name=";
			cin>>name;
			cout<<"\nenter rollno=";
			cin>>rollno;
		}
		void show_student()
		{
			cout<<"age is ="<<age<<endl;
			cout<<"name is ="<<name<<endl;
			cout<<"gpa is ="<<gpa<<endl;
			cout<<"rollno is ="<<rollno<<endl;
		}
		
		
};
int main()
{
	student student1;
	student1.get_student();
	student1.show_student();
	return 0;
}
