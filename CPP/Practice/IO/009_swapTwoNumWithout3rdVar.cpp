/**
 * Task: 
 *  Write a C++ program to swap values of two int variables
 *  without using third variable.
 */

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    
    cout<<"Enter Two Numbers for Swap: ";
    cin>>n1>>n2;
    cout<<"==Before Swap==\n";
    cout<<"Number1: "<<n1<< "\nNumber2:= "<<n2<<endl;

    /*method1: Using arithmetic*/
    // n1 = n1 + n2;
    // n2 = n1 - n2;
    // n1 = n1 - n2;

    /*method2: Using XOR*/
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    cout<<"==After Swap==\n";
    cout<<"Number1: "<<n1<< "\nNumber2:= "<<n2<<endl;

    return 0;
}