#include<iostream>
using namespace std;
struct date{
int day;
int month;
int year;
};
struct phonebook{
char name[20];
char city[10];
char telephone[20];
date d1;
};
int main(){
phonebook b1;
cout<<"Enter the name: ";
cin.getline(b1.name,20);
cout<<"Enter the city: ";
cin.getline(b1.city,10);
cout<<"Enter the telephone: ";
cin.getline(b1.telephone,20);
cout<<"Enter the day: ";
cin>>b1.d1.day;
cout<<"Enter the month: ";
cin>>b1.d1.month;
cout<<"Enter the year: ";
cin>>b1.d1.year;
cout<<"----Display data----"<<endl;
cout<<"name: "<<b1.name<<endl;
cout<<"city: "<<b1.city<<endl;
cout<<"telephone: "<<b1.telephone<<endl;
cout<<"day: "<<b1.d1.day<<endl;
cout<<"month: "<<b1.d1.month<<endl;
cout<<"year: "<<b1.d1.year<<endl;
return 0;
}
