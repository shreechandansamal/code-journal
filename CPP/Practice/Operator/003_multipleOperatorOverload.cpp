/**
 * Task:
 *  Define a class Complex with appropriate instance variables and
 *  member functions. Define following operators in the class:
 *   a. +
 *   b. -
 *   c. *
 *   d. ==
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
        
        /* operator*/
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.realNum = realNum + c.realNum;
            temp.imgNum = imgNum + c.imgNum;
            return temp;
        }
        Complex operator-(Complex c)
        {
            Complex temp;
            temp.realNum = realNum - c.realNum;
            temp.imgNum = imgNum - c.imgNum;
            return temp;
        }
        Complex operator*(Complex c)
        {
            Complex temp;
            temp.realNum = realNum * c.realNum;
            temp.imgNum = imgNum * c.imgNum;
            return temp;
        }
        bool operator==(Complex c)
        {
           if((realNum == c.realNum) && (imgNum == c.imgNum))
            {
                return true;
            }
            return false;         
        }
 };


 int main()
 {
    Complex c1, c2, c3;

    c1.setData(3, 4);
    c2.setData(3, 4);

    c3 = c1 + c2;
    c3.showData();

    c3 = c1 - c2;
    c3.showData();

    c3 = c1 * c2;
    c3.showData();

    if(c1 == c2) cout<<"Both Complex Numbers are Equal"<<endl;
    else cout<<"Both Complex Numbers are Not Equal"<<endl;

    return 0;
 }