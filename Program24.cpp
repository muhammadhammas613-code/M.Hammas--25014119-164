// 24. Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks). 
#include <iostream>
using namespace std;

void program24() {
    double subject1, subject2, subject3, subject4, subject5;
    double Total, Average;

    // Input
    cout << "Enter subject1: ";
    cin >> subject1;
    cout << "Enter subject2: ";
    cin >> subject2;
    cout << "Enter subject3: ";
    cin >> subject3;
    cout << "Enter subject4: ";
    cin >> subject4;
    cout << "Enter subject5: ";
    cin >> subject5;

    // Processing
    Total = subject1 + subject2 + subject3 + subject4 + subject5;
    Average = Total / 5;

    // Output
    cout << "Total = " << Total << endl;
    cout << "Average = " << Average << endl;

    // return 0;
}
