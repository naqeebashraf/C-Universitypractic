#include<iostream>
using namespace std;
int function(int sum);
int main()
{	
	float sum=0.0;
	int score[30]={50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79};
	float gpa[30]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.0,2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,3.0,3.1,3.2,3.3,3.4,3.5,3.6,3.7,3.8,3.9};
	string subject[5]={"english","physics","math","IIct","programming fundamental"};
	float total[5];
	int marks[5];
	cout<<"english :";
	cin>>marks[0];
	cout<<"physics :";
	cin>>marks[1];
	cout<<"math :";
	cin>>marks[2];
	cout<<"programming fundamental :";
	cin>>marks[4];
	cout<<"IIct :";
	cin>>marks[3];
	/*for(int i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	cout<<"total sum:"<<sum;*/
	//int p=function(sum);
	//cout<<"percentage :"<<p;
	for(int i=0;i<5;i++){		
		for(int j=0;j<30;j++)
		{
			if(marks[i]==score[j]){	
			cout<<"your gpa in "<<subject[i]<<"is :"<<gpa[j]<<endl;
			total[i]=gpa[j];
		}
		
		else if(marks[i]<50){cout<<"you are failed in "<<subject[i]<<endl;
		total[i]=0.0;
		break;}
		else if(marks[i]>=80){cout<<"your gpa in "<<subject[i]<<"is :"<<4.0<<endl;
		total[i]=4.0;
		break;}
		}
	}
//float sum=0;	//now ab ham cgpa calculate krenge
	for(int i=0;i<4;i++)
	{
	sum=sum+(total[i]*3.0); //credit hours in all except pf
	}
	sum=sum+(total[4]*4.0); //pf ke 4 credit hour hain aho 
float	cgpa=sum/16.0;
	cout<<"your total cgpa is :"<<cgpa;
}

