#include<iostream>
using namespace std;
class teacher
{
	private:
		int name;
		contact;
		char subject;
		string personality;
	public:
		void set_teacher(int n_name,int n_contact ,char n_subject,string n_personality)
		{
			n_name=name;
			n_contact =contact;
			n_subject=subject;
			n_personality=personality;
		}
		void get_teacher()
		{
			cout<<"\nenter teacher name=";
			cin>>name;
			cout<<"\nenter teacher contact =";
			cin>>contact;
			cout<<"\nenter teacher subject=";
			cin>>subject;
			cout<<"\nenter teacher personality=";
			cin>>personality;
		}
		void show_teacher()
		{
			cout<<"teacher name is="<<name<<endl;
			cout<<"teacher contact  is="<<contact<<endl;
			cout<<"teacher subject is="<<subject<<endl;
			cout<<"teacher personality is="<<personality;
		}
};
int main()
{
	teacher teacher1;
	teacher1.get_teacher();
	teacher1.show_teacher();
	return 0;
}
