/**
 * @file Lab3_2.cpp
 *
 * This This program has one syntax error and one logic error.
 *
 * @author AJ Currie
 * @date  09/4/25
 */
#include <iostream>
using namespace std;

int main ()
{

    double length = 0.0; // Length of a room in feet
    double width = 0.0; // Width of a room in feet
    double area = 0.0;    // Area of the room in sq. ft.

    // Get the room dimensions
    cout << "Enter room length (in feet): ";
    cin  >> length;

    cout << "Enter room width (in feet): ";
    cin  >> width;

    // Compute and display the area
    area = length * width;
    cout << "The area of the room is " << area; 
    cout << " square feet." << endl;

    return 0;
}