#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value";
	cin>>a;
	switch(a)
	{
	double cel,fah;
		case 1:
			cout<<"enter the temprature in celcius\n";
			cin>>cel;
			fah=(cel*9/5)+32;
			cout<<"temprature in fahrenheit is="<<fah<<endl;
			break;
	}
		
		{
			
		case 2:
	cout<<"enter the temprature in fahrenheit\n";
			cin>>fah;
			cel=(fah-32)+5/9;
			cout<<"temprature in celcius is="<<cel<<endl;
			break;
			}		
			
		case 3:
		{cout<<"enter the right choice"<<endl;
			break;
			}
	}	
			
	
	return 0;
}
