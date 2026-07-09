/**
 * Task:
 *  Write a C++ program to overload unary operators that is 
 *  increment and decrement (pre and post).
 */

#include <iostream>

using namespace std;

 class Unary
 {
    private:
        /* variables or properties */
        int num;
    public:
        /* functions or methods*/
        void setData(int n) { num = n; }
        void showData() { cout<<num<<endl; }
        
        //pre-increment operator
        Unary operator++()
        {
            Unary temp;
            num = num + 1;      // Increment current object first
            temp.num = num;     // Return incremented value
            return temp;
        }

        //pre-decrement operator
        Unary operator--()
        {
            Unary temp;
            num = num - 1;      // Decrement current object first
            temp.num = num;     // Return decremented value
            return temp;
        }

        //post-increment operator
        Unary operator++(int)
        {
            Unary temp;
            temp.num = num;     // Save old value
            num = num + 1;      // Then increment current object
            return temp;
        }

        //post-decrement operator
        Unary operator--(int)
        {
            Unary temp;
            temp.num = num;     // Save old value
            num = num - 1;      // Then decrement current object
            return temp;
        }

 };


 int main()
 {
    Unary n1, n2;

    n1.setData(5);

    cout << "Initial Value: ";
    n1.showData();

    cout << "\nPrefix Increment (++n1)" << endl;
    n2 = ++n1;

    cout << "n1 = ";
    n1.showData();

    cout << "n2 = ";
    n2.showData();

    cout << "\nPostfix Increment (n1++)" << endl;
    n2 = n1++;

    cout << "n1 = ";
    n1.showData();

    cout << "n2 = ";
    n2.showData();

    cout << "\nPrefix Decrement (--n1)" << endl;
    n2 = --n1;

    cout << "n1 = ";
    n1.showData();

    cout << "n2 = ";
    n2.showData();

    cout << "\nPostfix Decrement (n1--)" << endl;
    n2 = n1--;

    cout << "n1 = ";
    n1.showData();

    cout << "n2 = ";
    n2.showData();
    return 0;
 }