#include<iostream>
using namespace std;
void incriment(int num);
int main()
{
	int n;
	cout<<"enter a number =";
	cin>>n;
	incriment(n);
	return 1;
}
void incriment(int n)
{
	cout<<"incriment of a number is ="<<++n<<endl;
}
