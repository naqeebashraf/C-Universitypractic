#include <iostream>
using namespace std;
int square(int a);
int cube (int b);
int main()
{
int x,c,s;
cout<<"enter a number";
cin>>x;
c=cube(x);
s=square(x);
cout <<"Fainal value="<<5*(c+s);
return 0;
}
 int cube (int b)
{
 return b*b*b;
}




 int square (int a)
 {
 return a*a;
 }
