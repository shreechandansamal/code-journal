/**
 * Task:
 *  Define a function to check whether a given number is a Prime number or not.
 */

#include <iostream>

using namespace std;

bool checkPrime(int num);

int main()
{
    int n;
    cout<<"Enter a Number to check prime: "<<endl;
    cin>>n;

    if(checkPrime(n))
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }

    return 0;
}

bool checkPrime(int num)
{
    if (num <= 1)
        return false;

    // Check divisibility from 2 to n-1
    for (int i = 2; i < num; i++)
        {
            if (num % i == 0) return false;
        }

    return true;
}