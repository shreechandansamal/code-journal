/**
 * Task: 
 *  Write a C++ program to calculate the area of a circle.
 */

#include <iostream>

using namespace std;

int main()
{
    int r;
    const float pi = 3.1416f;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle is "<<(r * r) * pi<<endl;
}