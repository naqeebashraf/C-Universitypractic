#include<iostream>
#include<fstream>
using namespace std;
int ascii=175,i=0;
char ch=ascii;

struct shop
{
	int id,price,quantity;
	string name;
}
b[50];

//heading function
int heading()
{
     cout<<" \n";
	for (int j=1;j<26;j++)
	{
		cout<<ch;
	}
	cout<<" PHARMICY MANAGEMENT SYSTEM ";
	for (int j=1;j<26;j++)
	{
		cout<<ch;
	}	
}

int main()
{
	p:
     system("cls");
	int medicine;
	cout<<" \n";
	heading();
	cout<<"\n\n"<<ch<<ch<<" 1. ADD NEW MEDICINE ";
	cout<<"\n\n"<<ch<<ch<<" 2. SEARCH MEDICINE ";
	cout<<"\n\n"<<ch<<ch<<" 3. MODIFY MEDICINE ";
	cout<<"\n\n"<<ch<<ch<<" 4. DELETE MEDICINE ";
	cout<<"\n\n"<<ch<<ch<<" 5. SHOW ALL MEDICINE ";
	cout<<"\n\n"<<ch<<ch<<" 6. TO SEE MEDICINE LISTS ";
	cout<<"\n\n"<<ch<<ch<<" 7. EXIT ";
	cout<<"\n\n";
	for (int k=1;k<26;k++)
	{
		cout<<ch;
	}
	cout<<"\n\n"<<ch<<ch<<" ENTER YOUR MEDICINE -> ";
	cin>>medicine;
	
    
	switch(medicine)
	{
		case 1:
			system("cls");
			heading();
			cout<<"\n ENTER MEDICINE ID ";
			cin>>b[i].id;
			cout<<"\n ENTER MEDICINE NAME ";
			cin>>b[i].name;
			cout<<"\n ENTER MEDICINE PRICE ";
			cin>>b[i].price;
			cout<<"\n ENTER MEDICINE QUANTITY ";
			cin>>b[i].quantity;
			i++;
			cout<<"\n\n"<<ch<<ch<<" SUCCESSFULLY! ADDED NEW MEDICINE "<<ch<<ch;
			cout<<"\n\n"<<ch<<ch<<" PLEASE! PRESS ENTER "<<ch<<ch;
			break;
		case 2:
			system("cls");
			heading();
			if(i==0)
			{
				cout<<"\n\n"<<ch<<ch<<" RECORD IS EMPTY. "<<ch<<ch;
			}
			else
			{
				int s_id,found=0;
				cout<<"\n\n ENTER MEDICINE ID TO SEARCH -> ";
				cin>>s_id;
				for(int a=0;a<=i;a++)
				{
					if(s_id==b[a].id)
					{
						cout<<"\n\n MEDICINE NAME -> "<<b[a].name;
						cout<<"\n\n MEDICINE PRICE -> "<<b[a].price;
						cout<<"\n\n MEDICINE QUANTITY -> "<<b[a].quantity;
						found++;
						break;
					}
				}
				if(found==0)
				{
					cout<<"\n\n"<<ch<<ch<<" MEDICINE ID NOT FOUND! "<<ch<<ch;
				}
			}
			break;
		case 3:
			system("cls");
			heading();
			if(i==0)
			{
				cout<<"\n\n"<<ch<<ch<<" RECORD IS EMPTY. "<<ch<<ch;
			}
			else
			{
				int s_id,found=0;
				cout<<"\n\n ENTER MEDICINE ID FOR UPDATE -> ";
				cin>>s_id;
				for(int a=0;a<i;a++)
				{
					if(s_id==b[a].id)
					{
			          cout<<"\n ENTER MEDICINE NAME ";
			          cin>>b[a].name;
			          cout<<"\n ENTER MEDICINE PRICE ";
			          cin>>b[a].price;
			          cout<<"\n ENTER MEDICINE QUANTITY ";
			          cin>>b[a].quantity;
			          cout<<"\n\n"<<ch<<ch<<" SUCCESSFULLY! UPDATED MEDICINE "<<ch<<ch;
			          found++;
			          break;
					}
				}
				if(found==0)
				{
					cout<<"\n\n"<<ch<<ch<<" PRODUCT ID NOT FOUND. "<<ch<<ch;
				}
	          }
			cout<<"\n\n"<<ch<<ch<<" PLEASE! PRESS ENTER "<<ch<<ch;		     
			break;
		case 4:           
			system("cls");
			heading();
			if(i==0)
			{
				cout<<"\n\n"<<ch<<ch<<" RECORD IS EMPTY. PRESS ENTER TO GO TO MENU. THANK YOU! "<<ch<<ch;
			}
			else
			{
				int s_id,found=0;
				cout<<"\n\n ENTER MEDICINE ID FOR DELETE -> ";
				cin>>s_id;
				for(int a=0;a<=i;a++)
				{
					if(s_id==b[a].id)
					{
			          for(int c=a;c<=i;c++)
			          {
			          	b[c].id=b[c+1].id;
			          	b[c].name=b[c+1].name;
			          	b[c].price=b[c+1].price;
			          	b[c].quantity=b[c+1].quantity;
					}
			          cout<<"\n\n"<<ch<<ch<<" SUCCESSFULLY! DELETE PRODUCT "<<ch<<ch;
			          found++;
			          i--;
			          break;
					}
				}
				if(found==0)
				{
					cout<<"\n\n"<<ch<<ch<<" MEDICINE ID NOT FOUND. PRESS ENTER TO GO TO MENU. THANK YOU! "<<ch<<ch;
				}
			}
			cout<<"\n\n"<<ch<<ch<<" PLEASE! PRESS ENTER "<<ch<<ch;		     
			break;
		case 5:
		system("cls");
			heading();
			if(i==0)
			{
				cout<<"\n\n"<<ch<<ch<<" RECORD IS EMPTY! "<<ch<<ch;
			}
			else
			{
				for(int a=0;a<=i;a++)
				{
					cout<<"\n\n MEDICINE ID -> "<<b[a].id;
					cout<<"\n\n MEDICINE NAME -> "<<b[a].name;
					cout<<"\n\n MEDICINE PRICE -> "<<b[a].price;
					cout<<"\n\n MEDICINE QUANTITY -> "<<b[a].quantity<<"\n\n";
					for(int m=1;m<26;m++)
					   cout<<ch;
				}
			}
				break;
		case 6:
		     exit(0);
		     break;
		default:
		     cout<<"\n\n"<<ch<<ch<<" PLEASE ENTER CORRECT OPTION.PRESS ENTER GO TO MENU "<<ch<<ch;
		     
	}

	goto p;
	return 0;
}
