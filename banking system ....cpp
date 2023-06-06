#include<iostream>
using namespace std;

class Account
{
	private:
		string accountno;
		string account_title;
		double amount;
		char account_type;
	public:
	Account()
	{
		accountno=" ";
		account_title=" ";
		amount=0;
		account_type= ' ';
		}	
		Account(string a,string at,double am,char aty)
		{
			accountno=a;
			account_title=at;
			amount=am;
			account_type=aty;
		}
		Account(const Account& a)
		{
			accountno=a.accountno;
			account_title=a.account_title;
			amount=a.amount;
			account_type=a.account_type;
		}
		
		void deposit()
		{
			int a;
			cout<<"the deposit value :";
			cin>>a;
			amount +=a;
			cout<<"after the deposit value :"<<amount<<endl;
		}
		void withdraw()
		{
			int b;
			cout<<" the withdraw value :";
			cin>>b;
			amount -=b;
			
			if(b>amount)
			{
			
				cout<<"you will be wrong"<<endl;
			}
			cout<<"after the withdraw :"<<amount<<endl;
			
		}
		void changetype()
		{
			cout<<"enter change type :"<<endl;
			cin>>account_type;
		}
		double checkbalance()
		{
			cout<<"enter the amount to be checked :"<<amount<<endl;
			
			
		}
		void displayaccount_info()
		{
			cout<<"deposit account is :"<<amount<<endl;
			cout<<"withdraw value is :"<<amount<<endl;
			cout<<"changetype of account is :"<<account_type<<endl;
			cout<<"check balance of account is :"<<amount<<endl;
		}
		void setaccountno(string a)
		{
			accountno=a;
		}
		string getaccountno()
		{
			return accountno;
			cout<<accountno<<endl;
		}
		void setaccounttitle(string at)
		{
			account_title=at;
		}
		string getaccount_title()
		{
			return account_title;
			cout<<account_title<<endl;
		}
		void setamount(double am)
		{
			amount=am;
		}
		double getamount()
		{
			return amount;
			cout<<amount<<endl;
		}
		void setaccount_type(char aty)
		{
			account_type=aty;
		}
		char getaccount_type()
		{
			return account_type;
			cout<<account_type<<endl;
		}
		~Account()
		{
			cout<<"system destroyed ....";
		}
};

int main()
{
//	Account a1("naqeeb","qwerty",1000,'A');
	//a1.checkbalance();
//	a1.deposit();
//	a1.changetype();
	//a1.withdraw();
	//a1.checkbalance();
	Account a1;
	a1.getaccountno();
}
