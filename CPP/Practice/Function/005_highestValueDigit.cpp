/**
 * Task:
 *  Define a function to find the highest value digit in a given number.
 */

#include <iostream>

using namespace std;

int checkHighestDigit(int num);

int main()
{
    int num = 0;
    cout<<"Enter a number to find the highest value digit: "<<endl;
    cin>>num;
    cout<<"Highest Value Digit is "<<checkHighestDigit(num)<<endl;

    return 0;
}

int checkHighestDigit(int num)
{
    int highestDigit = 0;
    int tempVar = 0;

    while(num)
    {
    tempVar = num % 10;
    num = num / 10;
    highestDigit = (highestDigit > tempVar) ? highestDigit : tempVar;
    }

    return highestDigit;
}