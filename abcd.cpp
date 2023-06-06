#include <iostream>
using namespace std;

int main() {

  char ch;
  
  cout<<"Please enter a chr ";
  cin>> ch;
 
  if(ch>=65 && ch<=90)
	{
		cout<<"this is capital letter \n";
	}
	else if(ch>=97 && ch<=122)
	{
		cout<<"this is small letter \n";
	}
	else if (ch>=48 && ch<=57)
	{
		cout<<"this is digit";
	}
	else
	cout<<"this is special or other chract";
//  cout << ch;

  return 0;
}

