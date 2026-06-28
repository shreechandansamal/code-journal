/**
 * Task:
 *  Define a function to swap data of two int variables using call by reference.
 */

#include <iostream>

using namespace std;

void swapVar(int &n1, int &n2);

int main()
{
    int a, b;
    
    cout<<"Enter Two Numbers for Swap: "<<endl;
    cin>>a>>b;
    swapVar(a, b);

    return 0;
}


void swapVar(int &n1, int &n2)
{
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
}