// 17.	 Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen. 
#include <iostream>
using namespace std;

void program17() {
    // Input
    float val = 15.58971;

    // Processing
    int integral = (int) val;
    double fractional = val - integral;

    // Output
    cout << "Integral part: " << integral << endl;
    cout << "Fractional part: " << fractional << endl;

    // return 0;
}
