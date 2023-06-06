#include<iostream>
using namespace std;
void swap(int&x,int&y);
int main()
{
int a,b;
cout<<"Enter 2-numbers";
cin>>a>>b;
cout<<"Before swaping "<<endl;
cout<<a<<endl<<b<<endl;
swap(a,b);
cout<<"After swaping"<<endl;
cout<<a<<endl<<b;
return 0;
}
 void swap(int&x,int&y)
 {
 int t;
 t=y;
 y=x;
 x=t;

 }
 


