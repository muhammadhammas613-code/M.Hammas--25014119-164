// 30.	Write a program to test whether a given integer is odd or even using simple 'if' structure. 
#include <iostream>
using namespace std;

void program30() {
    int N = 2;

    // Processing
    if (N % 2 == 0) {
        cout << "N is Even" << endl;
    }

    if (N % 2 != 0) {
        cout << "N is Odd" << endl;
    }

    // return 0;
}
