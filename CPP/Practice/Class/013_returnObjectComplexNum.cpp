/**
 * Task:
 *  Define a class to represent a complex number. store real and imaginary part
 *  of a complex numbers. Define one more variable to display complex number.
 *  use return object.
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        int realNum;
        int imgNum;
    public:
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
            Complex temp;
            temp.realNum = realNum + c.realNum;
            temp.imgNum = imgNum + c.imgNum;

            return temp;
        }
 };


 int main()
 {
    Complex complexNum1, complexNum2, addComplex;

    complexNum1.setData(3, 2);
    complexNum2.setData(5, 3);
    addComplex = complexNum1.addComplexNum(complexNum2);
    addComplex.showData(); 

    return 0;
 }