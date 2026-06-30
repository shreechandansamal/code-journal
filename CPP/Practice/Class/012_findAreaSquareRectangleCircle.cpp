/**
 * Task:
 *  Define a class Area and define instance member functions to find the area of the
 *  different shapes like square, rectangle , circle etc.
 */
#include <iostream>

using namespace std;

class Area{
    private:
        float side, length, breadth, radius;

    public:
        void setSide(float s) {side = s;}
        void setLengthBreadth(float l, float b) {length = l; breadth = b;}
        void setRadius(float r) {radius = r;}
        float areaSquare() {return side * side;}
        float areaRectangle() {return length * breadth;}
        float areaCircle() {return 3.1416 * radius * radius;}
};


int main()
{
    float tN, tB, tL, tR;
    Area square, rectangle, circle;

    cout<<"Enter Side to find Area of Square:"<<endl;
    cin>>tN;
    square.setSide(tN);
    cout<<"Area of square is "<<square.areaSquare()<<endl;


    cout<<"Enter Breadth and length to find Area of Rectangle:"<<endl;
    cin>>tB>>tL;
    rectangle.setLengthBreadth(tB, tL);
    cout<<"Area of Rectangle is "<<rectangle.areaRectangle()<<endl;


    cout<<"Enter Radius to find Area of Circle"<<endl;
    cin>>tR;
    circle.setRadius(tR);
    cout<<"Area of Circle is "<<circle.areaCircle()<<endl;

    return 0;
}