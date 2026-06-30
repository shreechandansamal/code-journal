/**
 * Task:
 *  Define a class Rectangle and define an instance member function to find the area of
 *  the rectangle.
 */

#include <iostream>

using namespace std;

class Rectangle{
    private:
        float l;
        float w;
        float a;

    public:
        void setLength(float x) {l = x;}
        void setWidth(float y) {w = y;}
        float getLength() {return l;}
        float getWidth() {return w;}
        float getArea() {return a;}
        void calArea() {a = w * l;}
};


int main()
{
    float tW, tL;
    Rectangle rectangle;

    cout<<"Enter width and length of Rectangle to find it's Area:"<<endl;
    cin>>tW>>tL;
    rectangle.setWidth(tW);
    rectangle.setLength(tL);
    rectangle.calArea();
    cout<<"Area of Rectangle with Width "<<rectangle.getWidth()<<" and Length "<<rectangle.getLength()<<" is "<<rectangle.getArea()<<endl;

    return 0;
}