/**
 * Define a class to represent a complex number. store real and imaginary part
 * of a complex numbers. Define one more variable to display complex number.
 * 
 * Update:
 * instance member functions outside the class body,
 * using :: scope resolution operator and without that the function will treated as
 * non-member function.
 * 
 * NOTE:
 * inside class all functions are inline bydefault, so is the function actually takes
 * lot of time and consumes lot of memory then it should not be define inside the 
 * class (there we need to only declare the function inside the class and while 
 * defining the function outside of the class need to use scope resolution operator
 * which helps that function treated as member function of that particular class).
 * and if the function is small and consumes less memory and still willing to keep
 * it outside then while declaration inside class we can write inline keyword before
 * the function name. 
 *  
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        int realNum;
        int imgNum;
    public:
        inline void showData();
        void setData(int r, int i)
        {
            realNum = r; imgNum = i;
        } //bydefault inline
        void addComplexNum(Complex c)
        {
            cout<<realNum + c.realNum<<" + "<<imgNum + c.imgNum<<"i"<<endl;
        } //bydefault inline
 };

void Complex::showData()
{
    cout<<realNum<<" + "<<imgNum<<"i"<<endl;
}

 int main()
 {
    Complex complexNum1, complexNum2;

    complexNum1.setData(3, 2);
    complexNum2.setData(5, 3);

    complexNum1.showData();
    complexNum2.showData();
    cout<<"======"<<endl;
    complexNum1.addComplexNum(complexNum2);
    

    return 0;
 }