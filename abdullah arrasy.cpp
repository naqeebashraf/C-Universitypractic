#include<iostream>
using namespace std;

class Student
{
	private:
		int rollno;
		string name;
		Student*ppt;
	public:
	Student()
	{
		rollno=0;
		name=" ";
		}	
		Student(int n_rollno,string n_name)
		{
			name=n_name;
			rollno=n_rollno;
		}
		void getstudent()
		{
			ppt=new Student[3];
			for(int i=0;i<=3;i++)
			{
				cout<<"enter the rollno =";
				cin>>ppt[i].rollno;
				cout<<"enter the name =";
				cin>>ppt[i].name;
			}
		}
		void showstudent()
		{
			for(int i=0;i<=3;i++)
			{
				cout<<"roll no is ="<<ppt[i].rollno<<endl;
				cout<<"name is ="<<ppt[i].name<<endl;
				
			}
		}
		
		
		void setName()
		{
			cout<<"Enter name : " ;
			cin>>name;
		}
		string getName()
		{
			cout<<name<<endl;
			return name;
		}
};

int main()

{
	Student s1(54,"naqeeb");
	//Student s1;
//	s1.getstudent();
	//s1.showstudent();
}
