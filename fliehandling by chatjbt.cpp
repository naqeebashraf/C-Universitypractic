#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNo;
public:
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
    void setRollNo(int rollNo) {
        this->rollNo = rollNo;
    }
    int getRollNo() {
        return rollNo;
    }
};

int main() {
    Student s1;
    s1.setName("John");
    s1.setAge(20);
    s1.setRollNo(1);
    
    // Write student information to file
    ofstream outFile;
    outFile.open("E:\student_info.txt");
    outFile << s1.getName() << "," << s1.getAge() << "," << s1.getRollNo() << endl;
    outFile.close();
    
    // Read student information from file
    ifstream inFile;
    inFile.open("E:\student_info.txt");
    string line;
    getline(inFile, line);
    inFile.close();
    
    // Parse student information and print to console
    string delimiter = ",";
    size_t pos = 0;
    string token;
    while ((pos = line.find(delimiter)) != string::npos) {
        token = line.substr(0, pos);
        cout << token << endl;
        line.erase(0, pos + delimiter.length());
    }
    cout << line << endl;
    
    return 0;
}

