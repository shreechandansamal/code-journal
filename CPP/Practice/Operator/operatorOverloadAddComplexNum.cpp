/**
 * Learn:
 *  operator overloading using addition of complex number addition.
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
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.realNum = realNum + c.realNum;
            temp.imgNum = imgNum + c.imgNum;
            return temp;
        }
 };


 int main()
 {
    Complex c1, c2, c3;

    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2; /* there are two types to call operator,
                   * a. c3 = c1.operator+(c2);
                   * b. c3 = c1 + c2; 
                   * previously we doing like
                   * c1 + c2 with primitive data
                   * types now we can do the same
                   * with non-primitive data types */

    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
 }