struct result
{
int roll_no;
int marks[5];
};
int main()
{
result r1;
int sum=0;
float average=0.0;
cout<<"Enter the roll number: ";
cin>>r1.roll_no;
for(int i=0;i<5;i++){
cout<<"Enter the marks: ";
cin>>r1.marks[i];
sum=sum+r1.marks[i];
}
average=sum/5.0;
int c=1;
for(int i=0;i<5;i++)
{
cout<<"Your marks in subject"<<c<<" "<<"is"<<" "<<r1.marks[i]<<endl;
c++;
}
cout<<"Avergae of marks is= "<<average;
return 0;
}
