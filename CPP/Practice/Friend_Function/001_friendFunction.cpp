/**
 * Learn:
 * -friend function is not a member of a class to which it is a friend.
 * -function which is friend to a class can access any member of the class include
 *  private, protected or public.
 */

#include <iostream>

using namespace std;


 /**************method1: friend function without member of any class***************/
 class Item
 {
    private:
        int a, b; //Instance Member variable
    public:
        void setData(int x, int y) { a = x; b = y;}
        friend void f1(Item);
 };

 /* this will act as a utility any one from any function can call
  * this friend function and pass the object to lets say add the
  * numbers from the object. */
 void f1(Item i)
 {
    cout<<"sum is "<<i.a + i.b<<endl;
 }


 int main()
 {
    Item i1, i2;
    i1.setData(10, 20);
    f1(i1);
    i2.setData(30, 40);
    f1(i2);

    cout<<endl;
    return 0;
 }


/****************method2: friend function with member of any class******************/
/*
 class Item
 {
    private:
        int a, b; //Instance Member variable
    public:
        friend void f1();
 };

 class Test
 {
    public:
        void f1();
 };


 void Test::f1()
 {

 }


 int main()
 {
    Item i1;
    Test t1;
    t1.f1();

    cout<<endl;
    return 0;
 }
*/