#include<iostream>
using namespace std;
class Solution {
public:
    int countodds(int low, int high) {
       int count=0;
       for(int i=low;i<=high;i++)
       {
           if(i %2 !=0)
           {
               count++;
           }
       }
       return count;

    }
};
int main()
{
	Solution sol;

    int low=3;
    int high=7;
    int odd_count=sol.countodds( low,  high);
    cout<<"odd numbers between is :"<<low<<"and"<<high<<"is"<<odd_count<<endl;
    return 0;
}
