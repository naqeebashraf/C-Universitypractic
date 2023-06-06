#include<iostream>
using namespace std;
int main()
{
	int num;
	char degereeType;
	float degreeconvert;
	
	cout<<"enter the degree Type C for Centigrade and Press F for Faranhite \n ";
	cin>>degereeType; 
	cout<<"Enter the degree \n";
	cin>>num;
	
	switch (degereeType)
	{
	
		case 'f' :
		case 'F' :
			degreeconvert = 5* (num - 32)/9; 
			cout<< "Fahreneheit to celsius Temp : ";
			cout<< degreeconvert; 			
			break;
		case 'c':
		case 'C':	
			degreeconvert = (9.0/5.0) * num + 32;; 
			cout<< "Celsius to Fahreneheit Temp : ";
			cout<< degreeconvert; 
			break;
		default:
		cout<<"wrong input";
			
	}	
}		
