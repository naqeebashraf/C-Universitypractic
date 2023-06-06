#include<iostream>
using namespace std;

class student
{
	private:
		int rollno;
		string name;
		char grade;
	public:
		student()
		{
			rollno=0;
			name=" ";
			grade=0;
		}
		student(int n_rollno,string n_name,char n_grade)
		{
			n_rollno=rollno;
			n_name=name;
			n_grade=grade;
		}
		~student()
		{
			cout<<"destroy the data ....";
		}
		void getstudent()
		{
			cout<<"\nenter the rollno =";
			cin>>rollno;
			cout<<"\nenter the name =";
			cin>>name;
			cout<<"\nenter the grade =";
			cin>>grade;
		}
		void showstudent()
		{
			cout<<"rollno of student ="<<rollno<<endl;
			cout<<"name of student ="<<name<<endl;
			cout<<"grade of students ="<<grade<<endl;
		}
		
};
int main()
{
	student s1;
	s1.getstudent();
	s1.showstudent();
	cout<<endl;
	return 0;
}
