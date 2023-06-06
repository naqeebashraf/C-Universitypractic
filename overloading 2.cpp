#include<iostream>
using namespace std;

float display(float var)
{
	if (var < 0.0)
        var = -var;
    return var;
}
int display(int var)
{
	if (var<0)
	var=-var;
	return var;
}

int main()
{
	cout<<"display int value:"<<display(-5)<<endl;
	cout<<"display float vale:"<<display(5.5f)<<endl;
}
