#include<iostream>
using namespace std;
int main()
{
	int physics,computer,english,math,urdu,sum,total=500;
	float percentage;
	cout<<"\n Enter the marks of 5 subject:";
	cin>>physics>>computer>>english>>math>>urdu;
	
	sum=physics+computer+english+math+urdu;
	
	percentage=(sum*100)/total;
	cout<<"\n students percentage is:"<<percentage;
	return 0;
	
}
