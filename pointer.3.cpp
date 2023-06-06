#include<iostream>
using namespace std;

int main()
{
	int intvar;
	float flovar;
	
	int* ptrint;
	float* ptrflo;
	void* ptrvoid;
	
	ptrint=&intvar;
	ptrflo=&flovar;
	
	ptrvoid=&intvar;
	ptrvoid=&flovar;
	return 0;
	
}
