#include <iostream>
using namespace std;
int main()
{
int num[10];
int sum=1;
float avg=0.0;
int i;
for(i=0;i<10;i++)
{
 cout<<"Enter anumber:";
 cin>> num[i];
 sum=sum+num[i];
}
avg=sum/10.0;
cout<<"sum="<<sum<<endl;
cout<<"Average="<<avg;
return 0;
}

