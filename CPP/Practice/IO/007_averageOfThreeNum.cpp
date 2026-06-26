/**
 * Task: 
 *  Write a C++ program to calculate an average of 3 numbers.
 */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    int totalNum = 3;
    
    cout<<"Enter 3 Numbers for average: ";
    cin>>num1>>num2>>num3;
    cout<<"Average of 3 numbers is "<< (num1 + num2 + num3) / totalNum <<endl;

    return 0;
}