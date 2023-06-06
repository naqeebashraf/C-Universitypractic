#include<iostream>
#include <sstream>
using namespace std;

class Cricket
{
	private:
		string name;
		int shirtno;
		string date_of_birth;
		int odi_rating;
		int test_rating;
		int t20_rating;
		int startyear;
	public:
		Cricket()
		{
			name=" ";
			shirtno=0;
			date_of_birth=" ";
			odi_rating=0;
			test_rating=0;
			t20_rating=0;
			startyear=0;
		}
		Cricket(string n,int sn,string n_date_of_birth,int odi_r,int test_r,int t20_r,int sty)
		{
			name=n;
			shirtno=sn;
			date_of_birth=n_date_of_birth;
			odi_rating=odi_r;
			test_rating=test_r;
			t20_rating=t20_r;
			startyear=sty;
	}
	int calculate_age()
	{
	string date_of_birth = "2004";  
      
    int intage;  
      
    
     stringstream obj;     

     obj << date_of_birth;   
     obj >> intage; 
     cout << " The string value is: " << date_of_birth << endl;  
     cout << " convert into integer type: " << intage << endl;
     int age;
     int currentyear;
     cout<<"enter the currentyear:";
     cin>>currentyear;
     age= currentyear - intage;
     cout<<"age is ="<<age<<endl;
     
   
   
   
		}
		int calculate_experience()
		{
			int experience;
			cout<<"enter the startyear:";
			cin>>startyear;
			int currentyear;
			cout<<"enter the current year:";
			cin>>currentyear;
			
			experience=currentyear-startyear;
			cout<<" calculated experience is ="<<experience<<endl;
			
		}
		void  changeodi_rating(int odi_r)
		{
			odi_rating=odi_r;
			cout<<"odi rating is :"<<odi_r<<endl;
		}
		
		void changetest_rating(int test_r)
		{
			test_rating=test_r;
		}
	void changet20_rating(int t20_r)
	{
		t20_rating=t20_r;
	}
	~Cricket()
	{
		cout<<"cricket system destroy==";
	}
};

class Bowler:public Cricket
{
	private:
		string type;
		int total_wicket;
		int match_played;
		public:
			Bowler()
			{
				type=" ";
				total_wicket=0;
				match_played=0;
			}
			Bowler(string n_type,int total_w,int match_p,string n,int sn,string db,int odi_r,int test_r,int t20_r,int sty ):Cricket(n,sn,db,odi_r,test_r,t20_r,sty),type(n_type),total_wicket(total_w),match_played(match_p){
			}
			
			int calculatebowl_average()
			{
				float average;
				cout<<"enter the total wicket:";
				cin>>total_wicket;
				cout<<"enter the match played:";
				cin>>match_played;
				average=total_wicket/match_played;
			cout<<"average of bowler is ="<<average<<endl;
			}
			void upatematches(int match_p)
			{
				match_played=match_p;
			}
			void updatewicket(int total_w)
			{
				total_wicket=total_w;
			}
			~Bowler()
			{
				cout<<"bowler system destroyed ....";
			}
};

class Batsman:public Cricket
{
	private:
		string type;
		int total_runs;
		int match_played;
		int best_score;
	public:
	Batsman()
	{
		type=" ";
		total_runs=0;
		match_played=0;
		best_score=0;
		}	
	Batsman(string n_type,int total_r,int match_p,int best_s,string n,int sn,string db,int odi_r,int test_r,int t20_r,int sty):Cricket(n,sn,db,odi_r,test_r,t20_r,sty),type(n_type),total_runs(total_r),match_played(match_p),best_score(best_s){
	}	
	
	int calculatebatsman_average()
	{
		float average;
		cout<<"enter the total runs:";
		cin>>total_runs;
		cout<<"enter the match played:";
		cin>>match_played;
		average=total_runs/match_played;
		cout<<"average of batsman is :"<<average<<endl;
	}
	void updatematches(int match_p)
	{
		match_played=match_p;
	}
	void updateruns(int total_r)
	{
		total_runs=total_r;
	}
	~Batsman()
	{
		cout<<"batsman system destroyed .....";
	}
};


class AllRounder:public Cricket,public Bowler,public Batsman
{
	public:
		AllRounder()
		{
			
		}
		~AllRounder()
		{
			cout<<"All rounder system destroyed ...";
		}
};

int main()
{
//Cricket c1;
//c1.changeodi_rating(2);

//c1.calculate_age();
//c1.calculate_experience();
//Bowler b1;
//b1.calculatebowl_average();
//Batsman b1;
//b1.calculatebatsman_average();
AllRounder r1;


}
