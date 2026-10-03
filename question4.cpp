#include <iostream>
using namespace std;

int main() {

    //STUDENT INFORMATION

    string name;
    int rollno;
    float marks;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your roll number: ";
    cin >> rollno;
    cout << "Enter your marks: ";
    cin >> marks;

    cout<<"\nStudent Information:\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollno << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}