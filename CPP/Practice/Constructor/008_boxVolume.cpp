/**
 * Task:
 *  Define a class Box and write a program to enter length, breadth
 *  and height and initialise objects using constructor also define
 *  member functions to calculate volume of the box.
 */

#include <iostream>
#include <cstring>

using namespace std;

class Box
{
    private:
        float length;
        float breadth;
        float height;
    public:
        Box(float l, float b, float h)
        {
            length = l;
            breadth = b;
            height = h;
        }
        float calVolume()
        {
            return length * breadth * height;
        }
};

int main()
{
    Box box(2.2, 3.4, 5.2);
    cout<<"Volume of Box is: "<<box.calVolume()<<endl;


    return 0;
}