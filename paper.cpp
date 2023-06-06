#include<iostream>
using namespace std;

class Paper{
	private:
		int marks;
		string subject;
		
	public:
	Paper()
	{
		marks=0;
		subject=" ";
		}	
	Paper(int m,string s)
	{
		marks=m;
		subject=s;
		}	
		void display_info()
		{
			cout<<"subject is :"<<subject<<endl;
			cout<<"marks is :"<<marks<<endl;
		}
};
class Subjective:public Paper{
	private:
		string type;
		public:
			Subjective(){
				type=" ";
			}
				Subjective(int m,string s,string t):Paper(m,s),type(t){
				}
				void display_info()
				{
					Paper::display_info();
					cout<<"paper type is :"<<type<<endl;
				}
			
};

int main()
{
	Subjective(50,"math","written");
Subjective s;
s.display_info();
return 0;

}

