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
    pa:
    system("cls");
    int medicine;
    fstream file;
    cout<<" \n";
    heading();
    ofstream n("n.txt",ios::app);
    n <<"**************************\n";
    n<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(RM)"<<endl;
    n <<"**************************\n";
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
    int menu;
    cout<<"Enter 1 for Part 1 "<<endl
        <<"Enter 2 for File Handling "<<endl;
    cin>>menu;
    if(menu==1)
    {
        int a;
        az:
        cout<<" 1. ADD NEW MEDICINE ";
        cout<<"\n\n"<<ch<<ch<<" 2. SEARCH MEDICINE ";
        cout<<"\n\n"<<ch<<ch<<" 3. MODIFY MEDICINE ";
        cout<<"\n\n"<<ch<<ch<<" 4. DELETE MEDICINE ";
        cout<<"\n\n"<<ch<<ch<<" 6. SHOW ALL MEDICINE ";
        cout<<"\n\n"<<ch<<ch<<" 7. EXIT ";
        cout<<"Enter Your Option : ";
        cin>>a;
        int b;
        cout<<"ENTER SIZE :";
        cin>>b;
        if(a==1) {
            int arr[b];
            for (int i = 0; i < b; i++) {
                cout << "Enter the Name of the Medicine " << i + 1 << " : ";
                cin >> arr[i];
            }
            for (int i = 0; i < b; i++) {
                cout << "You Added these Medicines " << endl << arr[i];
            }
        }
        if(a==2)
        {
            string p;
            string arr[b];
            for (int i = 0; i < b; i++) {
                cout << "Enter the Name of the Medicine " << i + 1 << " : ";
                cin >> arr[i];
            }
            cout<<"Enter the name of Medicine to search : ";
            cin>>p;
            for (int i = 0; i < b; i++) {
                if(arr[i]==p)
                {
                    cout << "Your Searched Medicine is :-" << endl << arr[i];
                }
            }
        }
        if(a==3)
        {
            string p,pl;
            string arr[b];
            for (int i = 0; i < b; i++) {
                cout << "Enter the Name of the Medicine " << i + 1 << " : ";
                cin >> arr[i];
            }
            cout<<"Enter the name of Medicine to search : ";
            cin>>p;
            cout<<"Enter new name of the Medicine : " ;
            cin>>pl;
            for (int i = 0; i < b; i++) {
                if(arr[i]==p)
                {
                    cout << "Now Updated Medicine is :-" << endl << pl ;
                }
            }
        }
        if(a==4)
        {
            string arr[b];
            for (int i = 0; i < b; i++) {
                cout << "Enter the Name of the Medicine " << i + 1 << " : ";
                cin >> arr[i];
            }
            for (int i = 0; i < b; i++) {
                cout<< arr[i]<<endl;
            }
            string p;
            cout<<"Enter the name of medicine to delete : ";
            cin>>p;
            for (int i = 0; i < b; i++) {
                if(arr[i]==p)
                {
                    arr[i]="Record Deleted";
                }
            }
            for (int i = 0; i < b; i++) {
                cout<<arr[i]<<endl;
            }
        }
        if(a==6)
        {
            string arr[b];
            for (int i = 0; i < b; i++) {
                cout << "Enter the Name of the Medicine " << i + 1 << " : ";
                cin >> arr[i];
            }
            cout<<"**************************\n";
            cout<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(RM)"<<endl;
            cout<<"**************************\n";
            cout<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			RM 2.00"<<endl;
            cout<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		RM 3.00"<<endl;
            cout<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		RM 1.00"<<endl;
            cout<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		RM 4.00"<<endl;
            cout<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	RM 1.00"<<endl;
            cout<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		RM 5.00"<<endl;
            cout<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		RM 7.00"<<endl;
            cout<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			RM 4.00"<<endl;//1353fn
            cout<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			RM 3.00"<<endl;
            cout<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		RM 5.00"<<endl;
            cout<<" "<<endl;
            cout << "You Added these Medicines " << endl ;
            for (int i = 0; i < b; i++) {
                cout << " Name : " << arr[i]<<endl;
            }
        }
        if(a>7)
        {
            cout<<"Invalid Input Please Enter a Valid One"<<endl;
            goto az;
        }
    }
    if(menu==2)
    {
        ofstream p("data.txt",ios::app);
        ofstream la("details.txt",ios::app);
        la<<"**************************\n";
        la<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(RM)"<<endl;
        la<<"**************************\n";
        la<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			RM 2.00"<<endl;
        la<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		RM 3.00"<<endl;
        la<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		RM 1.00"<<endl;
        la<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		RM 4.00"<<endl;
        la<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	RM 1.00"<<endl;
        la<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		RM 5.00"<<endl;
        la<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		RM 7.00"<<endl;
        la<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			RM 4.00"<<endl;//1353fn
        la<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			RM 3.00"<<endl;
        la<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		RM 5.00"<<endl;
        la<<" "<<endl;
        la<< "\n\n MEDICINE ID -> " << " 0010 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << " Royal Propollen  "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "5.0"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "12"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0009 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << " Fabuloss  "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "3.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "120"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0008 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << " Burnex  "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0007 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << " Amino Zinc Tablet  "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0006 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << "  Maxi Cal Tablet  "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0005 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << "  Marino Tablet  "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0004 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << " Women'S Multivate "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0003 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << " Acid Free C(500mg) "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0002 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << "  Vitamin C(500mg)   "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        la<< "\n\n MEDICINE ID -> " << " 0001 "      <<endl;
        la<< "\n\n MEDICINE NAME -> " << " Probiotics "         << endl;
        la<< "\n\n MEDICINE PRICE -> " <<  "4.00"        <<  endl;
        la<< "\n\n MEDICINE QUANTITY -> " << "100"        <<  endl;
        ifstream op("details.txt");
        string z;
        while(getline(op,z))
        {
            cout<<z<<endl;
        }
        op.close();
        la.close();
        p << "\n\n" << ch << ch << " ENTER YOUR MEDICINE -> ";
        p << " 1. ADD NEW MEDICINE ";
        p<< "\n\n" << ch << ch << " 2. SEARCH MEDICINE ";
        p<< "\n\n" << ch << ch << " 3. MODIFY MEDICINE ";
        p << "\n\n" << ch << ch << " 4. DELETE MEDICINE ";
        p<< "\n\n" << ch << ch << " 5. SHOW ALL MEDICINE ";
        p << "\n\n" << ch << ch << " 6. EXIT ";
        p<< "\n\n";
        cin >> medicine;
        switch (medicine) {
            case 1:
                system("cls");
                heading();
                p << "\n ENTER MEDICINE ID ";
                cin >> b[i].id;
                p<< "\n ENTER MEDICINE NAME ";
                cin >> b[i].name;
                p<< "\n ENTER MEDICINE PRICE ";
                cin >> b[i].price;
                p<< "\n ENTER MEDICINE QUANTITY ";
                cin >> b[i].quantity;
                i++;
                file.open("b.txt", ios::app);
                if (file) {
                    p << " MEDICINE ID =" << b[i].id << endl;
                    p << " MEDICINE NAME=" << b[i].name << endl;
                    p << " MEDICINE  PRICE=" << b[i].price << endl;
                    p << " MEDICINE QUANTITY=" << b[i].quantity << endl;
                    file.close();
                }
                p << "\n\n" << ch << ch << " SUCCESSFULLY! ADDED NEW MEDICINE " << ch << ch;
                p << "\n\n" << ch << ch << " PLEASE! PRESS ENTER " << ch << ch;
                break;
            case 2:
                system("cls");
                heading();
                if (i == 0) {
                    p << "\n\n" << ch << ch << " RECORD IS EMPTY. " << ch << ch;
                } else {
                    int s_id, found = 0;
                    p << "\n\n ENTER MEDICINE ID TO SEARCH -> ";
                    cin >> s_id;
                    for (int a = 0; a <= i; a++) {
                        if (s_id == b[a].id) {
                            p << "\n\n MEDICINE NAME -> " << b[a].name;
                            p << "\n\n MEDICINE PRICE -> " << b[a].price;
                            p << "\n\n MEDICINE QUANTITY -> " << b[a].quantity;
                            found++;
                            break;
                        }
                    }
                    if (found == 0) {
                        p << "\n\n" << ch << ch << " MEDICINE ID NOT FOUND! " << ch << ch;
                    }
                }
                break;
            case 3:
                system("cls");
                heading();
                if (i == 0) {
                    p << "\n\n" << ch << ch << " RECORD IS EMPTY. " << ch << ch;
                } else {
                    int s_id, found = 0;
                    p << "\n\n ENTER MEDICINE ID FOR UPDATE -> ";
                    cin >> s_id;
                    for (int a = 0; a < i; a++) {
                        if (s_id == b[a].id) {
                            p << "\n ENTER MEDICINE NAME " << "Paracetamol";
                            cin >> b[a].name;
                            p << "\n ENTER MEDICINE PRICE " <<" 10  " ;
                            cin >> b[a].price;
                            p<< "\n ENTER MEDICINE QUANTITY " <<" 12 " ;
                            cin >> b[a].quantity;
                            p << "\n\n" << ch << ch << " SUCCESSFULLY! UPDATED MEDICINE " << ch << ch;
                            found++;
                            break;
                        }
                    }
                    if (found == 0) {
                        p << "\n\n" << ch << ch << " PRODUCT ID NOT FOUND. " << ch << ch;
                    }
                }
                p<< "\n\n" << ch << ch << " PLEASE! PRESS ENTER " << ch << ch;
                break;
            case 4:
                system("cls");
                heading();
                if (i == 0) {
                    p << "\n\n" << ch << ch << " RECORD IS EMPTY. PRESS ENTER TO GO TO MENU. THANK YOU! " << ch
                         << ch;
                } else {
                    int s_id, found = 0;
                    p<< "\n\n ENTER MEDICINE ID FOR DELETE -> ";
                    cin >> s_id;
                    for (int a = 0; a <= i; a++) {
                        if (s_id == b[a].id) {
                            for (int c = a; c <= i; c++) {
                                b[c].id = b[c + 1].id;
                                b[c].name = b[c + 1].name;
                                b[c].price = b[c + 1].price;
                                b[c].quantity = b[c + 1].quantity;
                            }
                            p<< "\n\n" << ch << ch << " SUCCESSFULLY! DELETE PRODUCT " << ch << ch;
                            found++;
                            i--;
                            break;
                        }
                    }
                    if (found == 0) {
                        p << "\n\n" << ch << ch << " MEDICINE ID NOT FOUND. PRESS ENTER TO GO TO MENU. THANK YOU! "
                             << ch << ch;
                    }
                }
                p << "\n\n" << ch << ch << " PLEASE! PRESS ENTER " << ch << ch;
                break;
            case 5:
                system("cls");
                heading();
                if (i == 0) {
                    p<< "\n\n" << ch << ch << " RECORD IS EMPTY! " << ch << ch;
                } else {
                    for (int a = 0; a <= i; a++) {
                        p<< "\n\n MEDICINE ID -> " << "200 "      <<b[a].id;
                        p<< "\n\n MEDICINE NAME -> " << " sin  "         << b[a].name;
                        p<< "\n\n MEDICINE PRICE -> " <<  "1000"        <<   b[a].price;
                        p << "\n\n MEDICINE QUANTITY -> " << "123"        << b[a].quantity << "\n\n";
                        for (int m = 1; m < 26; m++)
                            cout << ch;
                    }
                }
                break;
            case 6:
                exit(0);
                break;
            default:
                p<< "\n\n" << ch << ch << " PLEASE ENTER CORRECT OPTION.PRESS ENTER GO TO MENU " << ch << ch;
                ifstream l("data.txt");
                string a;
                while(getline(l,a))
                {
                    cout<<a<<endl;
                }
                l.close();
                p.close();
        }

        goto pa;
    }
    return 0;
}