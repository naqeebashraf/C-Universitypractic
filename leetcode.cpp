#include<iostream>
#include<string>
using namespace std;
	bool checkIfPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}
int main()
{
	string s1="abcdcba";
	string s2="racecar";
	string s3="hello";
	
	cout<<checkIfPalindrome(s1)<<endl;
	cout<<checkIfPalindrome(s2)<<endl;
	cout<<checkIfPalindrome(s3)<<endl;
	return 0;
}
