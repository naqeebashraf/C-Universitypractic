#include<iostream>
using namespace std;
int main()
{
int num[10];
for(int i=0;i<10;i++)
{
cout<<"Enter the value:";
cin>>num[i];
if(num[i]%2==0)
{cout<<num[i]<<"is even."<<endl;
}
else
{
 cout<<num[i]<<"is odd."<<endl;}
}
 cout<<"Element of the array:";
 for(int i=0;i<10;i++)
 {
 cout<<"\t"<<num[i];

}
 return 0;
}


