#include<iostream>
using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
		int seconds;
		char mode;
	public:
	Time()
	{
		hours=0;
		minutes=0;
		seconds=0;
		mode='0';
		}	
		Time(int h,int m,int s,char n_mode)
		{
			hours=h;
			minutes=m;
			seconds=s;
			mode=n_mode;
		}
		Time(int h,int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
		Time(const Time& t)
		{
			hours=t.hours;
			minutes=t.minutes;
			seconds=t.seconds;
			mode=t.mode;
		}
		void sethours(int h)
		{
			hours=h;
		}
		int gethours()
		{
			return hours;
			cout<<hours<<endl;
		}
		void setminutes(int m)
		{
			minutes=m;
		}
		int getminutes()
		{
			return minutes;
			cout<<minutes<<endl;
		}
		void setseconds(int s)
		{
			seconds =s;
		}
		int getseconds()
		{
			return seconds;
			cout<<seconds<<endl;
		}
		void setmode(char n_mode)
		{
			mode=n_mode;
		}
		char getmode()
		{
			return mode;
			
			cout<<mode<<endl;
		}
		void displaytime()
		{
			cout<<hours<<':'<<minutes<<':'<<seconds;
			if(mode='A')
			{
				cout<<"AM";
			}
			else 
				cout<<"PM";
			
		}
		 int converttoseconds()
		{
			hours=hours*3600;
			minutes=minutes*60;
			
		}
			
};

int main()
{
Time t1;
t1.sethours(12);
t1.setminutes(30);
t1.setseconds(23);
t1.setmode('p');
t1.displaytime();	
}
