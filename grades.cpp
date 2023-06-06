#include<iostream>
using namespace std;
char result(int );
int main()
{
	int marks;
	char g;
cout<<"enter the marks";
cin>>marks;
g=result(marks);
cout << g;
return 0;
}
char result(int a)
{
if(a>=90)
	return 'A';
//	{else if(>marks=80)
//	return A-;}
	else if(a>=70)
	return 'B';
	else if(a>=60)
	return 'C';
	else if(a>=50)
	return 'D';
	else
	return 'F';
}


