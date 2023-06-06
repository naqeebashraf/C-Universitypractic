#include<iostream>
using namespace std;

int main()
{
	int i,arr[10],index,num;
	cout<<"enter the element :";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number :";
	cin>>num;
	for(i=0;i<10;i++)
	{
		if(arr[i]==num)
		{
			index=i;
			break;
		}
	}
	cout<<"number found at the index:"<<index<<endl;
	return 0;
	
}
