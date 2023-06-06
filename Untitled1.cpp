#include<iostream>

using namespace std;

int main()
{
	int number, reminder, digitSum = 0;
	
	cout << "Please Enter the  Number to calculate Sum of Digits =  ";
	cin >> number;
	
	while (number > 0)
	{
    	reminder = number % 10;
    	digitSum += reminder;
    	number = number / 10;
    	
    	cout << "\nDigit = " << reminder << " and the Digit Sum = " << digitSum;
	}
	cout << "\n\nThe Sum of all Digits in a given Number = " << digitSum;
		
 	return 0;
 }
