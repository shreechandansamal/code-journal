/**
 * Define a class to represent a complex number. store real and imaginary part
 * of a complex numbers. Define one more variable to display complex number.
 */

#include <iostream>

using namespace std;

 class Complex
 {
    private:
        int realNum;
        int imgNum;
    public:
        void set(int r, int i){realNum = r; imgNum = i;} //set
        void print(){cout<<realNum<<" + "<<imgNum<<"i"<<endl;}
        void add(Complex c){cout<<realNum + c.realNum<<" + "<<imgNum + c.imgNum<<"i"<<endl;}
 };


 int main()
 {
    Complex complexNum1, complexNum2;

    complexNum1.set(3, 2);
    complexNum2.set(5, 3);

    complexNum1.print();
    complexNum2.print();
    cout<<"======"<<endl;
    complexNum1.add(complexNum2);
    

    return 0;
 }