#include<iostream>
using namespace std;
int main()
{
int num[2][4];
int min,max;
for(int i=0;i<2;i++)
{
for(int j=0;j<4;j++)
{
cout<<"Enter number: ";
cin>>num[i][j];
}
}
min=max=num[0][0];
for(int i=0;i<2;i++)
{
for(int j=0;j<4;j++)
{
if(num[i][j]>max)
max=num[i][j];
if(num[i][j]<min)
min=num[i][j];
}
}
cout<<"Maximum number : "<<max<<endl;
cout<<"Minimum number : "<<min<<endl;
return 0;
}
