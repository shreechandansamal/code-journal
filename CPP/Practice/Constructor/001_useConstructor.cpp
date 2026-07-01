/**
 * Learn:
 *  Use of constructor with a example.
 * 
 *  NOTE:
 *   - Complex method is a spcial method, does't return anything and called
 *     automatically while any object created.
 *   - in oops, Class obj; is not mean that 'obj' named object created because
 *     that time it contains garbage value but when we initialize the object
 *     member with appropriate or real world value then 'obj' will be treated as
 *     object, and that initialization value can be done by a constructor.
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        int realNum;
        int imgNum;
    public:
        Complex()
        {
            realNum = 0;
            imgNum = 0;
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
            Complex temp;
            temp.realNum = realNum + c.realNum;
            temp.imgNum = imgNum + c.imgNum;

            return temp;
        }
 };


 int main()
 {
    Complex complexNum1, complexNum2, addComplex;

    complexNum1.showData();
    complexNum2.showData();
    addComplex.showData();

    // complexNum1.setData(3, 2);
    // complexNum2.setData(5, 3);
    // addComplex = complexNum1.addComplexNum(complexNum2);
    // addComplex.showData(); 

    return 0;
 }