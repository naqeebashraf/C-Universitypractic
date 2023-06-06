#include<iostream>
using namespace std;


class star
{
	private:
		static int num;
	public:
	star()
	{
		num++;
		}
		int showstar()
		{
			return num;
			}	
};
int star::num=0;
int main()
{
	star s1,s2,s3;
	
	s1.showstar();
	s2.showstar();
	s3.showstar();
}
