// 7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.
#include <iostream>
#include <string>
using namespace std;
void program7(){
    // Input
    string rollnumber;
    cout << "Enter your roll number: ";
    getline(cin, rollnumber);

    int PF;
    cout << "Enter your PF marks: ";
    cin >> PF;

    int IC;
    cout << "Enter your IC marks: ";
    cin >> IC;

    int CG;
    cout << "Enter your CG marks: ";
    cin >> CG;

    // Processing
    int total;
    double average;
    total = PF + IC + CG;
    average = total / 3.0;

    // Output
    cout << "Total marks: " << total << endl;
    cout << "Average: " << average << endl;
    // return 0;
}
