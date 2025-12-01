// 28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac 
#include <iostream>
using namespace std;

void program28() {
    float a, b, c, Disc;

    // Input
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    // Processing
    Disc = (b * b) - 4 * (a * c);

    // Output
    cout << "Disc = " << Disc << endl;

    // return 0;
}

