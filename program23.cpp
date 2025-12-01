// 23.	Write a program to input the radius of a circle and calculate area & circumstance of the circle. 
// Formula for Area of a circle = 𝝅𝑹𝟐 
// Formula for Circumference of a circle = 𝟐𝝅𝑹 
#include <iostream>
using namespace std;

#define PI_23 3.14159

void program23() {
    float R, Area, Circumference;

    // Input
    cout << "Enter radius: ";
    cin >> R;

    // Processing
    Area = PI_23 * (R * R);
    Circumference = 2 * PI_23 * R;

    // Output
    cout << "Area: " << Area << endl;
    cout << "Circumference: " << Circumference << endl;

    // return 0;
}
