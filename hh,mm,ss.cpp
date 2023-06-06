#include<iostream>
using namespace std;
int main()
{
	int hh1,hh2,mm1,mm2,ss1,ss2,hh=0,mm=0,ss=0;
	cout<<"Enter time in hh:mm:ss format:";
	cin>>hh1>>mm1>>ss1;
	cout<<"Enter time 2 in hh:mm:ss format:";
	cin>>hh2>>mm2>>ss2;
	ss=ss1+ss2;
	mm=ss/60;
	ss=ss%60;
	mm=mm+(mm1+mm2);
	hh=mm/60;
	mm=mm%60;
	hh=hh+(hh1+hh2);
	cout<<"Sum of two times is :"<<hh<<":"<<mm<<":"<<ss<<endl;
	return 0;
}
