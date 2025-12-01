// 16.	Write a program to assign a value 3 to "int" type variables a, b and c using multiple assignment statement. Calculate the product of these numbers.
#include <iostream>
using namespace std;

void program16() {
    // Input
    int a, b, c;
    a = b = c = 3;   // Multiple assignment

    // Processing
    int product = a * b * c;

    // Output
    cout << "Product = " << product << endl;
    // return 0;
}
