// Write a program to input the values of three sides of a triangle and calculate its area using the formula:  
// 	 	Area = √𝒔(𝒔 − 𝒂)(𝒔 − 𝒃)(𝒔 − 𝒄)   	 	where s = (a + b + c)/2 
#include <iostream>
#include <cmath>
using namespace std;

void program25() {
    float a, b, c, s, Area;

    // Input
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    // Processing
    s = (a + b + c) / 2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output
    cout << "Area = " << Area << endl;

    // return 0;
}
