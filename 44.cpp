#include<iostream>
using namespace std;
int main()
{
	int i,arr[10],num,first ,last,middle;
	cout<<"enter the 10 elements in (ascendind order) =";
	for(int i=0;i<=10;++i)
	cin>>arr[i];
	cout<<"\n enter value to be search : ";
	cin>>num;
	first=0;
	last=9;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]<num)
		first=middle+1;
		else if(arr[middle]==num)
		{
			cout<<"\nthe number,"<<num<<"found at position"<<middle+1;
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
		
	}
	if(first>last)
	cout<<"\nthe number ="<<num<<"is not found in given array=";
	cout<<endl;
	return 0;
}
