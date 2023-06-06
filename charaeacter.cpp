#include<iostream>
using namespace std;
void show(int a,char b);
int main()
{
	int x;
	char y;
	cout<<"enter the number :";
	cin>>x;
	cout<<"enter the character :";
	cin>>y;
	show(x,y);
	return 0;
	
}
void show(int x,char y)
{
	for(int i=1; i <=x; ++i)
	{
		for(int j=1 ;j <=x; ++j)
		{
		cout<<"@";
	}
	cout<<endl;
}

}
