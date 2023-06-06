#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int num1;
	int num2;
	
//	ofstream write("E:/abc.txt");
	//write<<"i am file handling";
	
	string st;
	ifstream read("abc.txt");
	getline(read,st);
	cout<<st;
	
	
	
	//cin>>num1>>num2;
	//cout<<num1<<endl;
	//cout<<num2<<endl;
	
}
