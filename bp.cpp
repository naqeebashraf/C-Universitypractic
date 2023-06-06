#include<iostream>
using namespace std;
int main()
{
	int s,temp;
	cout<<"enter the sizr of array=";
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++)
	{
		cout<<"enter the elements of aaray=";
		cin>>arr[i];
	}
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<s;i++)
	{
		cout<<"the bubble sort =";
		cout<<arr[i]<<endl;
	}
	return 0;
	
}
