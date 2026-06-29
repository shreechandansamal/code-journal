/**
 * Task:
 *  Write functions using function overloading to find a maximum of two numbers and 
 *  both the numbers can be integer or real.
 */

#include <iostream>

using namespace std;

int findMax(int n1, int n2);
float findMax(float n1, float n2);


int main()
{
    int a, b;
    float c,d;

    cout<<"Enter Two Integer Numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter Two Real Numbers"<<endl;
    cin>>c>>d;

    cout<<"Max from Intiger Numbers is "<<findMax(a, b)<<endl;
    cout<<"Max from Intiger Numbers is "<<findMax(c, d)<<endl;

    return 0;
}


int findMax(int n1, int n2)
{
    return (n1 > n2 ? n1 : n2);
}

float findMax(float n1, float n2)
{
    return (n1 > n2 ? n1 : n2);
}