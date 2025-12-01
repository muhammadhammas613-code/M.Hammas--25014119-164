// Write a program using define directive to find the area of a circle. The formula to find the area of a circle is:
//     Area =πR^2      The value of π is 3.1417
#include <iostream>
using namespace std;

#define PI_13 3.1417  // Constant definition

void program13() {
    // Input
    double radius = 3;

    // Processing
    double area = PI_13 * (radius * radius);

    // Output
    cout << "Area of circle: " << area << endl;
    // return 0;
}
