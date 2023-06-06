#include<iostream>
using namespace std;

class Publication
{
	private:
		string title;
		float price;
		public:
			void getdata()
			{
				cout<<"enter the book title:";
				cin>>title;
				cout<<"enter the book price:";
				cin>>price;
			}
			void putdata()
			{
				cout<<"book title is ="<<title<<endl;
				cout<<"book price is ="<<price<<endl;
			}
};

class Book:private Publication
{
	private:
		int page_count;
		public:
			void getdata()
			{
				Publication::getdata();
				cout<<"enter the page of book:";
				cin>>page_count;
			}
			void putdata()
			{
				Publication::putdata();
				cout<<"the book pages is :"<<page_count<<endl;
			}
};
class Tape:private Publication
{
	private:
	float playing_time;
	public:
		void getdata()
		{
			Publication::getdata();
			cout<<"enter the playing time:";
			cin>>playing_time;
		}
		void putdata()
		{
			Publication::putdata();
			cout<<"the playing time is ="<<playing_time<<endl;
		}
	
};

class Publication2 :public Publication
{
	private :
		int date;
		string month;
		int year;
	public	:
		void getdata()
		{
			Publication::getdata();
			cout<<"enter the date:";
			cin>>date;
			cout<<"enter the month:";
			cin>>month;
			cout<<"enter the year:";
			cin>>year;
		}
		void putdata()
		{
			Publication::getdata();
			cout<<"whole date is :"<<date<<month<<year<<endl;
		}
};

int main()
{
	Book b1;
	b1.getdata();
	b1.putdata();
	Tape t1;
	t1.getdata();
	t1.putdata();
	return 0;
}

