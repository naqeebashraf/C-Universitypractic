#include<iostream>
 using namespace std;
void fprime(int);
 
main()
{
int i, j;
cout<<"Enter the number: ";
cin>>j;
fprime(j);
}
 
void fprime(int a)
{
int ans=0;
for(int i=2; i<a; i++)
{
if (a%i==0)
{
ans=1;
break;
}
}
if(ans==1)
{
cout<<a<<" is not a Prime Number "<<endl;
}
else
cout<<a<<" is a Prime Number "<<endl;
}
