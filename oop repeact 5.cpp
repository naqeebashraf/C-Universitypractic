#include<iostream>
using namespace std;
class teacher
{
	private:
		char name;
		int number;
		char subject;
		string personality;
	public:
		int setteacher(int n_name,int n_number, char n_subject,string n_personality)
		{
			n_name=name;
			n_number=number;
			n_personality=personality;
			n_subject=subject;
		}
		int getteacher()
		{
			cout<<"\nenter name=";
			cin>>name;
			cout<<"\nenter number=";
			cin>>number;
			cout<<"\nenter personality=";
			cin>>personality;
			cout<<"\nenter subject=";
			cin>>subject;
		}
		
};
int main()
{
	teacher teacher1;
	teacher1.getteacher();
	return 0;
}
