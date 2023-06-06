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
			if(mode=='A')
			{
				cout<<"AM"<<endl;
			}
			else 
				cout<<"PM"<<endl;
			
		}
		 int converttoseconds()
		{
			int time=0;
			cout << "Enter a time in seconds: ";
   			 cin >> time;
   			 hours = time/3600;
   			 time = time%3600;
   			 minutes = time/60;
    		time = time%60;
    		seconds = time;
    		cout<<"\nThe time in HH:MM:SS format is: "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds!\n";
 	
		}
	int	convertToMinutes()
	{
		cout << "Enter number of minutes: ";
 		 cin >> minutes;
 		  hours = minutes / 60;
 		  minutes = minutes % 60;
 		  seconds = minutes % 1 * 60;
 		  cout <<hours << "h " << minutes << "m " << seconds << "s" << endl;
	}
	int converttohours()
	{
		 cout << "Enter hours : ";
    cin >> hours;
    minutes = hours * 60;
    seconds = minutes * 60;
    hours=hours%60;
    cout << "\n" << hours << " hours = " << minutes << " minutes = " << seconds << " seconds";
	}
	 void convertTo24HourFormat() {
        if (mode == 'A' && hours == 12) {
            hours = 0;
        }
        else if (mode == 'P' && hours != 12) {
            hours += 12;
        }
        cout << "The time in 24-hour format is: " << hours << ":" << minutes << ":" << seconds;
        if (hours < 12) {
            cout << " AM";
        }
        else {
            cout << " PM";
        }
        cout << endl;
    }
    void incrementSeconds(int s) 
    {
		cout<<"enter the seconds :";
		cin>>seconds;
    	seconds +=s;
    	if(seconds>59)
    	{
    		minutes++;
    		cout<<minutes<<endl;
		}
		else if(minutes>59)
		{
			hours++;
			cout<<hours<<endl;
			if(hours>12 && minutes>59)
			{
				cout<<"pm"<<endl;
			}
			else
			{
				cout<<"am"<<endl;
			}
			cout<<seconds<<endl;
		}
	
		
		
	}
	void incrementMinutes(int m)
	{
		cout<<"enter the minutes :";
		cin>>minutes;
		minutes += m;
		if(minutes>59)
		{
			hours++;
		}
		
		cout<<minutes<<" "<<endl;
	 } 

	
	
			
};

int main()
{
	int hours,minutes,seconds;
	char mode;
	cout<<"enter the 24 format time :";
	cin>>hours>>minutes>>seconds>>mode;
Time t1(hours,minutes,seconds,mode);
//t1.sethours(12);
//t1.setminutes(30);
//t1.setseconds(23);
//t1.setmode('p');
//t1.displaytime();	
//t1.converttoseconds();
//t1.convertToMinutes();
t1.convertTo24HourFormat();
//t1.incrementSeconds(120);
return 0;
}

