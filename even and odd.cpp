#include<iostream>
using namespace std;
int main()
{
int arr[5][5];
int evencount;
int oddcount;
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
cout<<"Enter a number: ";
cin>>arr[i][j];
}
}
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
if(arr[i][j]%2==0)
{
evencount++;
}
else
{
oddcount++;
}
}
}
cout<<"Even numbers: "<<evencount<<endl;
cout<<"Odd numbers: "<<oddcount<<endl;
return 0;
}
