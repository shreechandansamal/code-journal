/**
 * Learn:
 *  c1 is passing as an argument here while C4 constructor calls.
 *  and why in copy constructor we use reference instead of actual object.
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

        /*2. we can also write our own copy constructor*/
        /*Complex(Complex C) {}*/ /* a.but this is an error because see as c1 type is 
                                       complex and when the c4 object is created then
                                       as c1 is the argument for constructor call the 
                                       c1 will pass and c1 is complex type and we were 
                                       actually doing that copy constructor but here 
                                       in Complex C this 'C' is also Complex type but
                                       actually here we were creating that copy 
                                       constructor which again calling the same
                                       copy constructor so this will be a infinite */

        Complex(Complex &C) /*b. what about reference? so here we are not creating
                                 a new object, we only passing the reference of c1,
                                 by this way we will save from infinite lop because
                                 that time that creates each time copy constructor 
                                 as because of create new objects which in this case
                                 will not happens. */
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
    /*Cpp Style choice: Complex c1(3, 4) or Complex c1 = Complex(3, 4) meaning same*/
    Complex c1(3, 4), c2(2), c3;

/*1. IMPORTANT: see the below difference where "=" is treated as copy constructor and where assignment operator. */
    /*Cpp Style choice: Complex c4 = c1 or Complex c4(c1) meaning same*/
    Complex c4 = c1; /* C1 is passing as an argument here while C4 constructor calls.
                      * but Complex type constuctor is actually not been done by us here,
                      * then will we get any error ? no compiler will make by its own inside
                      * the class.
                      * NOTE: constructor can make 2 constructor in a class by its own.
                              this means we have created 3 overloads or constructor here
                              and 1 overload or constructor is made by compiler itself. 
                              this is known as "copy constructor" as c1 is complex type
                              getting copied to c5 complex type. */
    
    /*c4 = c2;*/ /* here? wil copy constructor also work here ? NO!! because we are not creating
                    any object here, and without creating any object how the constructor will call?
                    but this is not an error as well here we are using assignment operator who knows
                    copy same type of data. so here copy constructor will not call assignment operator
                    will work.*/

    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
 }