/**
 * Learn:
 *  friend operator
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
        friend Complex operator+(Complex, Complex);
        friend Complex operator-(Complex);

 };


 //binary operator
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.realNum = X.realNum + Y.realNum;
    temp.imgNum = X.imgNum + Y.imgNum;
    return temp;
}

//unary operator
Complex operator-(Complex X)
{
    Complex temp;
    temp.realNum = -X.realNum;
    temp.imgNum = -X.imgNum;
    return temp;
}



 
int main()
 {
    Complex c1, c2, c3, c4;

    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2; /* first here operator+ called and
                   * pass c1 and c2 as argument.
                   * because now operator is not a 
                   * member of Complex class.
                   * c3 = operator+(c1,c2); */

    c1.showData();
    c2.showData();
    c3.showData();

    c4 =- c3; /* first here operator- called and
               * c3 pass as an argument and return
               * from operator- will assign to c4
               * c4 = operator-(c3)*/
    c4.showData();

    return 0;
 }