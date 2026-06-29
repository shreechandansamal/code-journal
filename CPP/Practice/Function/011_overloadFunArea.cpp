/**
 * Task:
 *  Define overloaded functions to calculate area of circle, area of rectangle and area of 
 *  triangle.
 */

#include <iostream>

using namespace std;

float area(int r);
int area(int l, int w);
float area(float h, float b);

int main()
{
    int tR, tL, tW;
    float tH, tB;

    cout<<"Enter Radius to find Area of Circle"<<endl;
    cin>>tR;
    cout<<"Enter Length and Width to find Area of Rectangle"<<endl;
    cin>>tL>>tW;
    cout<<"Enter Height and Bredth to find Area of triangle"<<endl;
    cin>>tH>>tB;

    cout<<"Area of Circle is "<<area(tR)<<endl;
    cout<<"Area of Rectangle is "<<area(tL, tW)<<endl;
    cout<<"Area of triangle is "<<area(tH, tB)<<endl;

    return 0;
}




// area of circle
float area(int r)
{
    return (3.1416 * r * r); 
}

// area of rectangle
int area(int l, int w)
{
    return l * w;
}

//area of triangle
float area(float h, float b)
{
    return (0.5 * h * b);
} 