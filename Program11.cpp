// 11.	Write a program to declare and initialize two variables of "int" type. Calculate the average of these values and print the result on screen. 
#include <iostream>
#include <string>

using namespace std;

void program11() {
    // Input
    int num1 = 10;
    int num2 = 20;

    // Processing
    double average = (num1 + num2) / 2.0;

    // Output
    cout << "The average of " << num1 << " and " << num2 << " is: " << average << endl;
    // return 0;
}
