/**
 * Task:
 *  Define a class Cube and calculate Volume of Cube
 *  and initialise it using constructor.
 */

#include <iostream>

using namespace std;

class VolumeCube
{
    private:
        float side;
    public:
        VolumeCube(float s) {side = s; }
        void setSide(float s) { side = s; }
        float getSide() { return side; }
        float calVolume() { return side * side * side; }
};

int main()
{
    VolumeCube v(4.5); //initialise the value using parameterized constructor

    // v.setSide(4.5);
    cout<<"Volume of Cube with side "<<v.getSide()<<" is "<<v.calVolume()<<endl;
    return 0;
}