#include<iostream>
using namespace std;
int main()
{
	int num;
	char measureType;
	float measureConvert;
	
	cout<<"enter the measure type \n";
	cin>>measureType; 
	cout<<"Enter the number \n";
	cin>>num;
	
	switch (measureType)
	{
	
		case 'c' :
		case 'C' :
			measureConvert = num * 0.01;
			cout<< "centimeter to meter : ";
			cout<< measureConvert; 			
			break;
		case 'G':
		case 'g':	
			measureConvert = num * 3.78541;
			cout<< "Gallon to Litter : ";
			cout<< measureConvert;  
			break;
		case 'M':
		case 'm':	
			measureConvert = num * 1.609;
			cout<< "Miles to KM : ";
			cout<< measureConvert;  
			break;	
		case 'P':
		case 'p':	
			measureConvert = num / 2.205;
			cout<< "Pound to KG : ";
			cout<< measureConvert;  
			break;
		default:
		cout<<"Exit Program";
			
	}	
}		
