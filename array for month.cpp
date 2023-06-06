#include<iostream>
using namespace std;
int main()
{
	int n, M, D;
	int sum=0, flag=0;
	cout<<"\nEnter Number of Month and date :";
	cin>>M>>D;
	int day[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for(int j=0;j<M;j++){
			if(M==1)
				sum=0;
			else
				sum+=day[j];
		}
		sum+=D;
		
}
