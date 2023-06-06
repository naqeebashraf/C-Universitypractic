
#include<iostream>
using namespace std;
int main()
{
	int age[20], a=0, y=0, b=0;
	for(int i=0;i<20;i++) {
		cout<<"\nEnter Age: ";
		cin>>age[i];
		if(age[i]<=10)
			b++;
		else if(age[i]<=25 && age[i]>10)
			y++;
		else
			a++;
	}
	cout<<"\nNumber of Adults: "<<a<<"\nNumber of Young People: "<<y<<"\nNumber of Babies: "<<b;
	return 0;
}
