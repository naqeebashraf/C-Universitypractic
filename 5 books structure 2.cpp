
#include<iostream>
#include<conio.h>
using namespace std;
struct book {
	int id;
	int pg;
	float price;
};
int main()
{
	book B[5];
	for(int i=0; i<5;i++) {
		cout<<"Enter book id: ";
		cin>>B[i].id;
		cout<<"Enter Pages: ";
		cin>>B[i].pg;
		cout<<"Enter Price: ";
		cin>>B[i].price<<endl;
	}
	for(int i=0; i<5;i++) {
		cout<<"book id ="<<B[i].id<<endl;
		cout<<"Pages = "<<B[i].pg;
		cout<<"Enter Price: "<<B[i].price<<endl;	
	}
}
