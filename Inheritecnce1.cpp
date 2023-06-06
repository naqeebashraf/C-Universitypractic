#include<iostream>
using namespace std;


class Counter{
	
	private:
		int count;
	public:
		Counter(){
			cout<<"Parent class";
		}
};

class CountDn:public Counter{
//	public:
//		CountDn(){
//			cout<<"Child class";
//		}
};
int main(){
//	Counter c1;
	CountDn c2;
	
}
