#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "Pharmacy Management System" << endl;
    cout << "1. Add medicine" << endl;
    cout << "2. Display all medicines" << endl;
    cout << "3. Search medicine" << endl;
    cout << "4. Delete medicine" << endl;
    cout << "5. Exit" << endl;
}

// Function to add medicine
void addMedicine() {
    ofstream outFile("medicines.txt", ios::app);
    if (!outFile) {
        cerr << "Error: File could not be opened." << endl;
        return;
    }
    
    string name;
    double price;
    int quantity;
    
    cout << "Enter medicine name: ";
    getline(cin, name);
    
    cout << "Enter medicine price: ";
    cin >> price;
    
    cout << "Enter medicine quantity: ";
    cin >> quantity;
    
    outFile << name << " " << price << " " << quantity << endl;
    
    cout << "Medicine added successfully." << endl;
    
    outFile.close();
}

// Function to display all medicines
void displayMedicines() {
    ifstream inFile("medicines.txt");
    if (!inFile) {
        cerr << "Error: File could not be opened." << endl;
        return;
    }
    
    string name;
    double price;
    int quantity;
    
    cout << left << setw(20) << "Medicine Name" << setw(10) << "Price" << setw(10) << "Quantity" << endl;
    cout << "----------------------------------------------------" << endl;
    
    while (inFile >> name >> price >> quantity) {
        cout << left << setw(20) << name << setw(10) << price << setw(10) << quantity << endl;
    }
    
    inFile.close();
}

// Function to search for a medicine
void searchMedicine() {
    ifstream inFile("medicines.txt");
    if (!inFile) {
        cerr << "Error: File could not be opened." << endl;
        return;
    }
    
    string name;
    bool found = false;
    
    cout << "Enter medicine name to search: ";
    getline(cin, name);
    
    double price;
    int quantity;
    
    while (inFile >> name >> price >> quantity) {
        if (name == name) {
            cout << left << setw(20) << name << setw(10) << price << setw(10) << quantity << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "Medicine not found." << endl;
    }
    
    inFile.close();
}

// Function to delete a medicine
void deleteMedicine() {
    string name;
    bool found = false;
    
    cout << "Enter medicine name to delete: ";
    getline(cin, name);
    
    ifstream inFile("medicines.txt");
    if (!inFile) {
        cerr << "Error: File could not be opened." << endl;
        return;
    }
    
    ofstream tempFile("temp.txt");
    if (!tempFile) {
        cerr << "Error: File could not be opened." << endl;
        return;
    }
    
    double price;
    int quantity;
    
    while (inFile >> name >> price >> quantity) {
        if (name != name) {
            tempFile << name << " " << price << " ";



