#include <iostream>  
#include <sstream> // use stringstream class   // use stringstream class  
using namespace std;  
  
int main()  
{
	string date_of_birth = "2004";  
      
    int intage;  
      
    
     stringstream obj;  
     obj << date_of_birth;   
     obj >> intage; 
     cout << " The string value is: " << date_of_birth << endl;  
     cout << " The representation of the string to integer type data is: " << intage << endl;
     int age;
     int currentyear;
     cout<<"enter the currentyear:";
     cin>>currentyear;
     age= currentyear - intage;
     cout<<"age is ="<<age<<endl;
     return 0;
}
    
