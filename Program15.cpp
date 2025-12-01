// 15.	Write a program to interchange values of two variables.
#include <iostream>
using namespace std;

void program15() {
    // Input
    int x = 5, y = 10;

    // Processing
    int temp = x;
    x = y;
    y = temp;

    // Output
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    // return 0;
}
