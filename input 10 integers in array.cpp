#include <iostream>
using namespace std;
int main()
{
	#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num[10];
	int n, loc=-1;
	for(int i=0;i<10;i++) {
		cout<<"\nenter Values in Array: ";
		cin>>num[i];
	}
	system("cls");
	cout<<"\nEnter Number to search: ";
	cin>>n;
	for(int i=0;i<10;i++) {
		if(n==num[i]) {
			loc=i;
			cout<<"\nElement found and available at location = "<<i;
			exit;
		}	}
	if(loc==-1) {
		cout<<"\nSorry number not found ";
	}
	return 0;
}
}
