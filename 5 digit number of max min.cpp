#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,min,max;
	cout<<"Enter 5-digit integar=";
	cin>>a>>b>>c>>d>>e;
	min=max=a;
	if(b>max)
	{max=b;}
	if(c>max)
	{max=c;}
	if(d>max)
	{max=d;}
	if(e>max)
	{max=e;}
	if(b<min)
	{min=b;}
	if(c<min)
	{min=c;}
	if(d<min)
	{min=d;}
	if(e<min)
	{min=e;}
	cout<<"maximum value="<<max<<endl;
	cout<<"minimum value="<<min<<endl;
	return 0;
	
	
}
