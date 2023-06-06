#include<iostream>
using namespace std;
int main()
{
	int s;
	cout<<"enter the elememnt in s";
	cin>>s;
	int arr[s]; 
	for(int i=0;i<s;i++)
	{
		cout<<"Enter array element :";
		cin>>arr[i];
	}
	cout<<"Forward array is :-"<<endl;
	for(int j=0;j<s;j++)
	{
		cout<<arr[j];
	}
	cout<<"Reversed array is : " <<endl;
	for(int j=s-1;j>=0;j--)
	{
		cout<<arr[j];
     }
}
