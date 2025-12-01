// 22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen. 
#include <iostream>
#include <string>
using namespace std;

void program22() {
    string name, gender;
    int age;
    float height;

    // Input
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height (in feet): ";
    cin >> height;
    cout << "Enter Gender: ";
    cin >> gender;

    // Processing
    string details = "Name: " + name + "\nAge: " + to_string(age) +
                     " years\nGender: " + gender + "\nHeight: " +
                     to_string(height) + " feet.";

    // Output
    cout << "Your details are give below";
    cout << details << endl;

    // return 0;
}
