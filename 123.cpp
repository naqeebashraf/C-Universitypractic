#include<iostream>
using namespace std;
int main()
{
int table[5][4];
for(int i=0;i<5;i++)
{
for(int j=0;j<4;j++)
{
cout<<"ENter a value: ";
cin>>table[i][j];
}
}
cout<<"\n\n\t\t\t\Values in table is given as:\n\n"<<endl;
for(int i=0;i<5;i++)
{
for(int j=0;j<4;j++)
{
cout<<table[i][j]<<"\t";
}
cout<<endl;
}
return 0;
}
