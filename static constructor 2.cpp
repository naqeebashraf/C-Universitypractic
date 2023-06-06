#include<iostream>
using namespace std;

class mobile
{
	private:
		static int num;
	public:
	mobile()
	{
        num=0;
		num++;
		}	
	int getmobile()
	{
		cout<<num;
		}	
	int showmobile()
	{
		return num;
		}	
};


int main()
{
	mobile m1,m2,m3;
	
	m1.getmobile();
	m2.getmobile();
	m3.getmobile();
	
}
