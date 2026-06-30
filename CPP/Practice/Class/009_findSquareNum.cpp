/**
 * Task:
 *  Define a class Square to find the square of a number and write a C++ program to
 *  Count number of times a function is called.
 */

#include <iostream>

using namespace std;

class Square{
    private:
        float n;
        float s;
        static int count;//count function

    public:
        void setNum(float x) {n = x;}
        float getNum() {return n;}
        float getSquare() {return s;}
        void calSquare() {s = n * n; count++;/*lets count here*/}
        int getCount() {return count;}
};

int Square::count = 0;

int main()
{
    float tN;
    Square square;

    cout<<"Enter a Number to find it's Square:"<<endl;
    cin>>tN;
    square.setNum(tN);
    square.calSquare();
    cout<<"Square of "<<square.getNum()<<" is "<<square.getSquare()<<endl;
    cout<<"Number of times a Function (using count) called is "<<square.getCount()<<endl;

    return 0;
}