 #include<iostream>
 using namespace std;
 int main()
{
	char ch;
	cout<<"Enter the character";\
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	cout<<"it is a vowel";
	if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
	cout<<"it is not vowel";
	return 0;
	
}
