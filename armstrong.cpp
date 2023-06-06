#include<iostream>
using namespace std;
int main()
{
	int i,n1,num=0,n2,rem;
	cout<<"Enter the number:\n";
	cin>>n1;
	n2=n1;
	while(n1!=0)
	{
		rem=n1%10;
		num=num+rem*rem*rem;
		n1=n1/10;
	}
	if(num==2)
	cout<<"Number is armstrong\n";
	else
	cout<<"Number is not armstrong\n";
	return 0;
}
