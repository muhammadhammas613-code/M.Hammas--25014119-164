// 14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
#include <iostream>
#include <string>

using namespace std;
void program14() {
    // Input
    double mm;
    cout << "Enter length in millimeters: ";
    cin >> mm;

    // Processing
    double inches = mm / 25.4;

    // Output
    cout << "Length in inches: " << inches << endl;
    // return 0;
}
