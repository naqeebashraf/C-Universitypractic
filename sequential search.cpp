
#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5

using namespace std;

void linear_search(int[], int);

int main() {
    int arr_search[MAX_SIZE], i, element;

    cout << "Simple C++ sequential Search Example - Array and Functions\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Searching : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_search[i];
    }

    cout << "\nEnter Element to Search : ";
    cin>>element;

    //sequential Search Function
    linear_search(arr_search, element);

    getch();
}

void linear_search(int fn_arr[], int element) {
    int i;

    /* for : Check elements one by one - sequential */
    for (i = 0; i < MAX_SIZE; i++) {
        /* If for Check element found or not */
        if (fn_arr[i] == element) {
            cout << "\nsequential Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == MAX_SIZE)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}
