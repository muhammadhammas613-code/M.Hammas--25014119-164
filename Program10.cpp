// 10.	Write a program to convert 2.5 miles into kilometers and print the result on screen. (Hint: 1 mile = 1.609 kilometers) 
#include <iostream>
#include <string>
using namespace std;

void program10() {
    // Input
    double miles = 2.5;

    // Processing
    double km = miles * 1.609;

    // Output
    cout << "Distance in kilometers: " << km << " km" << endl;
    // return 0;
}
