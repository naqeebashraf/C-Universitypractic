#include<iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e,max,min =0;
	cout<<"Enter the 5-digit integer=";
	cin>>a>>b>>c>>d>>e;
	min=max=a;
	if(a>max)
	{max=a;}
	if(b>a)
	{max=b;}
	if(c>b)
	{max=c;}
	if(d>c)
	{max=d;}
	if(e>d)
	{max=e;}
	if(a<min)
	{min=a;}
	if(b<a)
	{min=b;}
	if(c<b)
	{min=c;}
	if(d<c)
	{min=d;}
	if(e<d)
	{min=e;}
	cout<<"maximum="<<max<<endl;
	cout<<"minimum="<<min;
	return 0;
	
}
