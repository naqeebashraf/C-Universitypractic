#include<iostream>
using namespace std;

class Student
{
	private :
		string name;
	public:
	int setstudent(string n_name)
	{
		name=n_name;

		cout<<"enter name=";
		cin>>name;
		}	
	string getstudent()
	{
		cout<<name<<endl;
		return name;
		}	
};
int main()
{
	Student s1("naqeeb");
	s1.getstudent();
}
