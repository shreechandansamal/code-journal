/**
 * Task:
 *  Write functions using function overloading to add two numbers having different data 
 *  types.
 */

#include <iostream>

using namespace std;

int add(int n1, int n2);
float add(float n1, float n2);


int main()
{
    int a, b;
    float c,d;

    cout<<"Addition: Enter Two Integer Numbers"<<endl;
    cin>>a>>b;
    cout<<"Addition: Enter Two Real Numbers"<<endl;
    cin>>c>>d;

    cout<<"Max from Intiger Numbers is "<<add(a, b)<<endl;
    cout<<"Max from Intiger Numbers is "<<add(c, d)<<endl;

    return 0;
}


int add(int n1, int n2)
{
    return n1 + n2;
}

float add(float n1, float n2)
{
    return n1 + n2;
}