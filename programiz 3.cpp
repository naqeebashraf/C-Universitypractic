#include<iostream>
using namespace std;

class Person
{
	private:
		string  name;
		protected:
			int rollno;
			int age;
		public:
		void section()
		{
			cout<<"my section is 2c"<<endl;
			}
			
				void setname(string name)
				{
					name=n_name;
					}	
					string getname()
					{
						cout<<name<<endl;
						return name;
					}
	
};

class Student:public Person
{
	public:
		void getstudent(int n_rollno,int n_age)
		{
			rollno=n_rollno;
			n_age=n_age;
		}
		void displaystudent(string n)
		{
			cout<<"roll no is ="<<rollno<<endl;
			cout<<"age is "<<age<<endl;
			cout<<"name is "<<n<<endl;
		}
		void bye()
		{
			cout<<"the intro is end .....";
		}
};

int main()
{
	Student s1;
	
	s1.section();
	s1.getname();
	s1.getstudent(435,64);
	s1.displaystudent(s1.getname());
	s1.bye();
}
