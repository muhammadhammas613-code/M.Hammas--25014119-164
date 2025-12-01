// 19.	Write a program to assign your age in a variable and find the age in months and days. 
#include <iostream>

using namespace std;

void program19() {
    // Input
    int age = 20;

    // Processing
    int months = age * 12;
    int days = age * 365;

    // Output
    cout << "Age in months: " << months << endl;
    cout << "Age in days: " << days << endl;

    // return 0;
}
