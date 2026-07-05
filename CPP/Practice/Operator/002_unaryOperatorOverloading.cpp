/**
 * Learn:
 *  this is an example of Binary Operator Overloading.
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        /* variables or properties */
        int realNum;
        int imgNum;
    public:
        /* functions or methods*/
        void setData(int r, int i)
        {
            realNum = r; imgNum = i;
        }
        void showData() 
        {
            cout<<realNum<<" + "<<imgNum<<"i"<<endl;
        }
        
        /* operator (but in behind it is a function only)*/
        //binary operator
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.realNum = realNum + c.realNum;
            temp.imgNum = imgNum + c.imgNum;
            return temp;
        }

        //unary operator
        Complex operator-()
        {
            Complex temp;
            temp.realNum = -realNum;
            temp.imgNum = -imgNum;
            return temp;
        }


 };


 int main()
 {
    Complex c1, c2, c3, c4;

    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2;

    c1.showData();
    c2.showData();
    c3.showData();

    c4 =- c3;
    c4.showData();

    return 0;
 }