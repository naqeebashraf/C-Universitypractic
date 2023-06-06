#include<iostream>
using namespace std;

class Student 
{
	private:
		int rollno;
		string name;
		string section;
		int age;
		Student * ptr;
	public:
	Student()
	{
		name=" ";
		age=0;
		section="0";
		rollno=0;
	}
	Student(int n_rollno,string n_name,string n_section,int n_age)
	{
		rollno=n_rollno;
		name=n_name;
		section=n_section;
		age=n_age;
		cout<<name<<endl;
		cout<<rollno<<endl;
	}
	~Student()
	{
		delete [] ptr;
		cout<<"system destroyed .....";
	}
	void getstudent()
	{
		ptr=new Student [5];
		for(int i=0;i<5;i++)
		{
		cout<<"rollno is=";
		cin>>ptr[i].rollno;
		cout<<"name is=";
		cin>>ptr[i].name;
		cout<<"section is =";
		cin>>ptr[i].section;
		cout<<"age is =";
		cin>>ptr[i].age;
	    }
	}
	void showstudent()
	{
		for(int i=0;i<5;i++)
		{
		
		cout<<"rollno is = "<<ptr[i].rollno<<endl;
		cout<<"name is ="<<ptr[i].name <<endl;
		cout<<"section is ="<<ptr[i].section<<endl;
		cout<<"age is ="<<ptr[i].age<<endl;
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
Student s1(22040,"Abdullah"," ",0);
//	Student s1;

	//s1.getstudent();
	//s1.showstudent();
	return 0;
}
