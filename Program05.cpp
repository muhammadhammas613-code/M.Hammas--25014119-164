// 5.	Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen. 
#include <iostream>
#include <string>
using namespace std;
void program5(){
    // Input
    int num1, num2, sum, product;
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    // Processing
    sum = num1 + num2;
    product = num1 * num2;
    // Output 
    cout << "Sum is: " << sum << endl;
    cout << "Product is: " << product << endl;
    // return 0;
}
