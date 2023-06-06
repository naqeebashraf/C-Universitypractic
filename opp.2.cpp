#include<iostream>
using namespace std;

class date
{
	private:
		int day;
		string month;
		int year;
	public:
		void setdate(int temp_day,string temp_month,int temp_year)
		{
			day=temp_day;
			month=temp_month;
			year=temp_year;
		}
		void getdate()
		{
			cout<<"\n enter day =";
			cin>>day;
			cout<<"\n enter month=";
			cin>>month;
			cout<<"enter year=";
			cin>>year;
		}
		void showdate()
		{
			cout<<day<<"/"<<month<<"/"<<year;
		}
};
int main()
{
	date date1;
	date1.getdate();
	date1.showdate();
	return 0;
}
