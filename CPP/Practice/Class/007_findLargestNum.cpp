/**
 * Task:
 *  Define a class LargestNumber and define an instance member function to find the Largest of
 *  three Numbers using the class.
 */

#include <iostream>

using namespace std;

class LargeNum{
    private:
        int num1;
        int num2;
        int num3;
        int largeNum;

    public:
        void setNum(int x, int y, int z) {num1 = x; num2 = y; num3 = z;}
        int getLargeNum() {return largeNum;}
        void findLargeNum() { largeNum = (num1 >= num2 && num1 >= num3) ? num1 : (num2 >= num3) ? num2 : num3;}
};


int main()
{
    int n1, n2, n3;
    LargeNum largenum;

    cout<<"Enter 3 Number to find Largest"<<endl;
    cin>>n1>>n2>>n3;
    largenum.setNum(n1, n2, n3);
    largenum.findLargeNum();
    cout<<"Largest Number is "<<largenum.getLargeNum()<<endl;

    return 0;
}