// 27.	Write a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen. 
#include <iostream>
using namespace std;

void program27() {
    int Hours, Minutes, Seconds;
    int time_in_seconds;

    // Input
    cout << "Enter Hours: ";
    cin >> Hours;
    cout << "Enter Minutes: ";
    cin >> Minutes;
    cout << "Enter Seconds: ";
    cin >> Seconds;

    // Processing
    time_in_seconds = (Hours * 60 * 60) + (Minutes * 60) + Seconds;

    // Output
    cout << "Time in seconds = " << time_in_seconds << endl;

    // return 0;
}
