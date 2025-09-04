/**
 * @file Lab3_3.cpp
 *
 * Changes seconds into day, hours, min, and seconds
 *
 * @author AJ Currie
 * @date  09/4/25
 */


#include <iostream>
using namespace std;

int main ()
{
    // enter number of seconds : 9234
    cout << "Enter number of seconds: ";
    int input;
    cin >> input;

    int days= input/(24*3600); // seconds in a day
    int hours= input/60%60;
    int minutes=input/60%60;
    int seconds= input%60;

    cout << input <<" seconds is equivalent to "
    << days <<" days "<< hours <<" hours "
    << minutes <<" minutes and " << seconds <<" seconds\n";

    // 9234 seconds is equivalent to 0 dys, 2 hours , 33 minutes, 54 seconds
}