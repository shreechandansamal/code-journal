/**
 * Learn:
 *  destructor invoks when the object is about to destroy.
 *  we can also write the destructor explicitly by using tilde(~) symbol
 *  before the class name.
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        int realNum;
        int imgNum;
    public:
        Complex() //non parameterized constructor
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

        ~Complex() // destructor takes no parameter and no return type
        {
            //lets print something to understand destructor is working...
            cout<<"Bye"<<endl;
        }

        Complex(Complex &C)
        {
            realNum = C.realNum;
            imgNum = C.imgNum;
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

    Complex c1(3, 4), c2(2), c3;
    Complex c4 = c1;
    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
 }