#include<iostream>
using namespace std;
class teacher
{
	private:
		string name;
		int contact;
		string subject;
		int salary;
	public:
		void set_teacher(string n_name,int n_contact ,string n_subject,int n_salary)
		{
			n_name=name;
			n_contact =contact;
			n_subject=subject;
			n_salary=salary;
			
		}
		void get_teacher()
		{
			cout<<"\nenter  name=";
			cin>>name;
			cout<<"\nenter  contact =";
			cin>>contact;
			cout<<"\nenter subject=";
			cin>>subject;
			cout<<"\nenter salary=";
			cin>>salary;
			cout<<endl;
		}
		void show_teacher()
		{
			cout<<"teacher name is="<<name<<endl;
			cout<<"teacher contact  is="<<contact<<endl;
			cout<<"teacher subject is="<<subject<<endl;
			cout<<"teacher salary is="<<salary<<"Rs"<<endl;
		}
};
int main()
{
	teacher teacher1;
	teacher1.get_teacher();
	teacher1.show_teacher();
	return 0;
}
