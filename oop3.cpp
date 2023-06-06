#include<iostream>
using namespace std;
class time
{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		void set_time(int hr,int min,int sec)
		{
			hr=hours;
			min=minutes;
			sec=seconds;
		}
		void get_time()
		{
			cout<<"\nenter the hours=";
			cin>>hours;
			cout<<"\nenter minutes=";
			cin>>minutes;
			cout<<"\nenter seconds=";
			cin>>seconds;
		}
		void show_time()
		{
			cout<<hours<<"hour"","<<minutes<<"min"","<<"sec"<<seconds;
		}
};
int main()
{
	time time1;
	time1.get_time();
	time1.show_time();
	return 0;
}
