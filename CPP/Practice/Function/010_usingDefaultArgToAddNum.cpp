/**
 * Task:
 *  Write a function using the default argument that is able to add 2 or 3 numbers.
 */

#include <iostream>

using namespace std;

int add(int, int, int=0); //assigned 0 to the 3rd variable 

int main()
{
    int a, b, c;

    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"Sum is "<<add(a, b)<<endl;

    cout<<"Enter three numbers "<<endl;
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a, b, c)<<endl;   

    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}