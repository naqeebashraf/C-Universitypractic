#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int sum=0;
	float average=0.0;
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"enter the numbers:";
		cin>>num[i];
	sum=sum+num[i];
}
average=sum/10.0;
cout<<"sum="<<sum<<endl;
cout<<"average="<<average<<endl;
return 0;
	
}	
