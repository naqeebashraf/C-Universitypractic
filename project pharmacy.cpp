#include<iostream>
#include<fstream>
using namespace std;
int ascii=178,i=0;
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
    cout<<" PHARMACY MANAGEMENT SYSTEM ";
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
    fstream file;
    cout<<" \n";
    heading();
    ofstream n("n.txt",ios::app);
    n <<"**************************************************************************\n";
    n<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(RM)"<<endl;
    n <<"**************************************************************************\n";
    n<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			RM 2.00"<<endl;
    n<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		RM 3.00"<<endl;
    n<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		RM 1.00"<<endl;
    n<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		RM 4.00"<<endl;
    n<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	RM 1.00"<<endl;
    n<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		RM 5.00"<<endl;
    n<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		RM 7.00"<<endl;
    n<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			RM 4.00"<<endl;//1353fn
    n<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			RM 3.00"<<endl;
    n<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		RM 5.00"<<endl;
    n<<" "<<endl;
    n<<" 1. ADD NEW MEDICINE ";
    n<<"\n\n"<<ch<<ch<<" 2. SEARCH MEDICINE ";
    n<<"\n\n"<<ch<<ch<<" 3. MODIFY MEDICINE ";
    n<<"\n\n"<<ch<<ch<<" 4. DELETE MEDICINE ";
    n<<"\n\n"<<ch<<ch<<" 5. SHOW ALL MEDICINE ";
    n<<"\n\n"<<ch<<ch<<" 6. EXIT ";
    n<<"\n\n";
    n.close();
    for (int k=1;k<26;k++)
    {
        cout<<ch;
    }
    a:
    cout<<"\n\n"<<ch<<ch<<" ENTER YOUR MEDICINE -> ";
    cout<<" 1. ADD NEW MEDICINE ";
    cout<<"\n\n"<<ch<<ch<<" 2. SEARCH MEDICINE ";
    cout<<"\n\n"<<ch<<ch<<" 3. MODIFY MEDICINE ";
    cout<<"\n\n"<<ch<<ch<<" 4. DELETE MEDICINE ";
    cout<<"\n\n"<<ch<<ch<<" 5. SHOW ALL MEDICINE ";
    cout<<"\n\n"<<ch<<ch<<" 6. EXIT ";
    cout<<"\n\n";
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
            file.open("b.txt",ios::app);
            if(file){
            	file<<" Medcine ID ="<<b[i].id<<endl;
            	file<<"Medicine NAME="<<b[i].id<<endl;
            	file<<"Medicine PRICE="<<b[i].id<<endl;
            	file<<"Medicine QUANTITY="<<b[i].id<<endl;
            	file.close();
			}
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
