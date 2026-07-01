/**
 * Learn:
 *  Use of parameterized constructor.
 *  constructor with parameter or arguments so for that we also need to pass
 *  same number of args while creating objects as shown below.  
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        int realNum;
        int imgNum;
    public:
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
    Complex complexNum1(3, 4), complexNum2(2, 1), addComplex(5, 5); //pass args

    complexNum1.showData();
    complexNum2.showData();
    addComplex.showData();

    return 0;
 }