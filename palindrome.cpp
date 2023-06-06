#include<iostream>
using namespace std;
int main()
{
	int num,temp,rev=0,rem;
	cout<<"Enter a number:=";
	cin>>num;
	temp=num;
	while (temp>0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp/=10;
	}
	cout<<"Number was:"<<num<<endl;
	cout<<"Reverse is:"<<rev<<endl;
	if(num==rev)
	cout<<"So,number is palindrome";
	else
	cout<<"So,number is not palindrome";
	return 0;
}
