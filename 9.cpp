#include <iostream>
int even_odd(int n);
using namespace std;
int main()
{
int m,v;
cout<<"Enter the number=";
cin>>m;
v=even_odd(m);
if(v==0)
{
cout<<"Number is even";}
else
{
cout <<"Number is odd";}
return 0;
}
 int even_odd(int n)
 {
 if(n%2==0)
 return 0;
 else
 return 1;

 }

