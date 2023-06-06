#include<iostream>
using namespace std;
int main()
{
	int s;
	int p;
	cout<<"enter the size of array=";
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++)
	{
		cout<<"enter the elements of array =";
		cin>>arr[i];
	}
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		if(arr[i]<arr[j])
		swap(arr[i],arr[j]);
	}
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"enter the element to be search=";
	cin>>p;
	for(int i=0;i<s;i++)
	{
		if(arr[i]==p)
		{
			cout<<"seracching element is ="<<i<<endl;
		}
		
	}
	return 0;
}
