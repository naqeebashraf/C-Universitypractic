
#include<iostream>
using namespace std;
int main()
{
	int age[10], a=0, y=0;
	for(int i=0;i<10;i++) {
		cout<<"\nEnter Age: ";
		cin>>age[i];
		if(age[i]>40)
			a++;
		else
			y++;
	}
	cout<<"\nNumber of Adults: "<<a<<"\nNumber of Young People: "<<y;
	return 0;
}
