
#include<iostream>
using namespace std;
int main()
{
	int array[5][4];
	for(int i=0; i<5;i++) {
		for(int j=0; j<4; j++) {
			cout<<"\nEnter Value: ";
			cin>>array[i][j];
		}
	}
	for(int i=0; i<5;i++) {
		for(int j=0; j<4; j++) {
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}
