#include<iostream>
using namespace std;
int main()
{
	int i,arr[10],first,last,middle,num;
	cout<<"enter the number in (ascending order)=";
	for(i=0;i<=10;++i)
	cin>>arr[i];
	cout<<"\nenter the number to be search";
	first=0;
	last=9;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]<num)
		first=middle+1;
		else if(arr[middle]==num)
		{cout<<"the value of ="<<num<<"found at position"<<middle+1;
		break;}
	else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	cout<<"the value is"<<num<<"value is not found in given array";
	cout<<endl;
	return 0;
	}

