/**
 * Learn:
 *  Use of parameterized multiple constructor.
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        int realNum;
        int imgNum;
    public:
        Complex() //parameterized constructor
        {
            realNum = 0;
            imgNum = 0;
        }
        Complex(int x) //parameterized constructor
        {
            realNum = x;
            imgNum = 0;
        }
        Complex(int x, int y) //parameterized constructor
        {
            realNum = x;
            imgNum = y;
        }
        void setData(int r, int i)
        {
            realNum = r; imgNum = i;
        }
        void showData() 
        {
            cout<<realNum<<" + "<<imgNum<<"i"<<endl;
        }
        Complex addComplexNum(Complex c)
        {
            Complex temp(0, 0);
            temp.realNum = realNum + c.realNum;
            temp.imgNum = imgNum + c.imgNum;

            return temp;
        }
 };


 int main()
 {
    Complex complexNum1(3, 4), complexNum2(2), addComplex;

    complexNum1.showData();
    complexNum2.showData();
    addComplex.showData();

    return 0;
 }