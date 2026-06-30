/**
 * Task:
 *  Define a class Circle and define an instance member function to find the area of the circle.
 */

#include <iostream>

using namespace std;

class Circle{
    private:
        const float pi = 3.1416f;
        float r;
        float a;

    public:
        void setRadius(float x) {r = x;}
        float getRadius() {return r;}
        float getArea() {return a;}
        void calArea() {a = pi * r * r;}
};


int main()
{
    float tR;
    Circle circle;

    cout<<"Enter Radius to find Area of Circle"<<endl;
    cin>>tR;
    circle.setRadius(tR);
    circle.calArea();
    cout<<"Area of Circle with Radius "<<circle.getRadius()<<" is "<<circle.getArea()<<endl;

    return 0;
}