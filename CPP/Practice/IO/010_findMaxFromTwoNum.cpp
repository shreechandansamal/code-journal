/**
 * Task: 
 *  Write a C++ program to find the maximum of two numbers.
 */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    
    cout<<"Enter Two Number for find Max: "<<endl;
    cin>>num1>>num2;
    cout<<"Max is "<< (num1 > num2 ? num1 : num2) <<endl;

    return 0;
}