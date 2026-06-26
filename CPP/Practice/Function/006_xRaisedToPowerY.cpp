/**
 * Task:
 *  Define a function to calculate x raised to the power y.
 */

#include <iostream>

using namespace std;

int pow(int n1, int n2);

int main()
{
    int x, y;
    cout<<"Enter x and y to find x^y: "<<endl;
    cin>>x>>y;
    cout<<"x^y is "<<pow(x, y)<<endl;

    return 0;
}

int pow(int n1, int n2)
{
    int power = 1;
    for (int i = 0; i < n2; i++)
    {
        power = power * n1;
    }

    return power;
}