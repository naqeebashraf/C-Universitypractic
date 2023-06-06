#include<iostream>
using namespace std;
int main()
{
	int n, M, D, y;
	int sum=0, flag=0;
	cout<<"\nEnter year : ";
	cin>>y;
	if(y%4==0)
		flag++;
	cout<<"\nEnter Number of Month and date :";
	cin>>M>>D;
	int day[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for(int j=0;j<M;j++){
			if(M==1)
				sum=0;
			else
				sum+=day[j];
		}
		if(flag==1)
		sum=sum+D+1;
		else
		sum+=D;
		
}
