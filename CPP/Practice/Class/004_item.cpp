/**
 * Learn:
 *  What is static member variable, how to use it.
 *  
 *  Static Member variable will get the memory at Item class, 
 *  not inside any object. 
 * 
 *  But can be accessed by using "object.static member variable"
 *  or
 *  directly access from class as they are not object specific using "Item::k"
 * 
 *  NOTE: if properties are static then method to use those properties also should
 *        be static, by which without making any object also we can access those
 *        static properties.
 *  
 */

#include <iostream>

using namespace std;

 class Item
 {
    private:
        int a, b; //Instance Member variable
        static int k; //Static Member variable
    public:
        void setA(int x) {a = x;}
        void setB(int y) {b = y;}
        int getA() {return a;}
        int getB() {return b;}
        static void setK(int z) {k = z;} //static because not object specific
        static int getK() {return k;} //static because not object specific
 };

int Item::k; /* this gives memory to k,
                here directly you can assign value as well like, k = 10;*/ 

 int main()
 {
    Item i1, i2;
    /*while properties are public and no methods*/
    // i1.a = 5;
    // cout<<"a= "<<i2.a; //garbage
 
    /*one way to r/w the static member variable*/
    // i1.k = 4;
    // cout<<"\nk= "<<i2.k; //4

    /*another way to r/w the static member variable*/
    // Item::k = 4;
    // cout<<"\nk= "<<Item::k;

    /*properties are private and can be access by its method*/
    i1.setA(5);
    cout<<"a= "<<i1.getA(); //5

    i2.setA(7);
    cout<<"\na= "<<i2.getA(); //7
    
    i1.setB(3);
    cout<<"\nb= "<<i1.getB(); //3

    i2.setB(9);
    cout<<"\nb= "<<i2.getB(); //9

    Item::setK(2);
    cout<<"\nk= "<<Item::getK(); //2

    cout<<endl;

    return 0;
 }