
#include<iostream>
using namespace std;
struct book {
	char title[10];
	char name[20];
	int page;
	double price;
	char edition[5];
};
int main() 
{
	book B[5];
	for(int i=0; i<5; i++)
		cout<<"Enter Record of book "<<i<<endl;
		cout<<"Enter title of book: ";
		cin>>B[i].title;
		cout<<"Enter Your Name: ";
		cin>>B[i].name;
		cout<<"Enter Price of book: ";
		cin>>B[i].price;
		cout<<"Enter Number of pages of book: ";
		cin>>B[i].page;
		cout<<"Enter edition of book: ";
		cin>>B[i].edition;
		cout<<endl;
	}
	system("cls");
	for(int i=0; i<5; i++) 
	
	{	cout<<"Record of book "<<endl;
		cout<<"title of book = "<<B[i].title<<endl;
		cout<<"Your Name = "<<B[i].name<<endl;
		cout<<"Price of book = "<<B[i].price<<endl;
		cout<<"Number of pages of book = "<<B[i].page<<endl;
		cout<<"Enter edition of book: "<<B[i].edition<<endl<<endl;
	}
}
