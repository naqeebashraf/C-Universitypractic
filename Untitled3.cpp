#include<iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"enter the marks";
	cin>>mark;
	if(mark>=0 && mark<=50)
	{cout<<"Grade:F";}
	else if(mark>=50 && mark<=59)
	{cout<<"Grade:D";}
	else if(mark>=60 && mark<=69)
	{cout<<"Grade:C";}
	else if(mark>=70 && mark<=79)
	{cout<<"Grade:B";}
	else if(mark>=80 && mark<=89)
	{cout<<"Grade:A";}
	else if(mark>=90 && mark<=100)
	{cout<<"Grade:A+";}
	else
	{cout<<"invalid number";}
	return 0;
}
