/**
 * Task:
 *  test how refernce variable works in cpp,
 *  and how it is different than pointer and address.
 */

#include <iostream>

using namespace std;

void referencePass(int, int);
void addressPass(int, int*);

int main()
{
    int a = 5;
    int &b = a;
    int c = 10;
    int *d = &c;

    referencePass(a, b);
    addressPass(c, &c);
    addressPass(c, d);

    return 0;
}

void referencePass(int x, int y)
{
   int tempVar = 0;

   cout<<"Value in x[a]: "<<x<< endl; //Value in a: 5
   cout<<"Value in y[b]: "<<y<< endl; //Value in b: 5

   /**
    * operation for variable b
    * NOTE: by doing any operation with b, directly affect to
    *       the variable which it actually refer(means a).
    */
   cout<<"==Reference Operations=="<< endl;
   
   tempVar = y;
   cout<<"Value in y[b]: "<<++tempVar<< endl; //Value in b: 6

   tempVar = y;
   cout<<"Value in y[b]: "<<--tempVar<< endl; //Value in b: 4

   cout<<"\n";

}

void addressPass(int x, int *y)
{
    cout<<"Value in x[c]: "<<x<< endl;
    cout<<"Address in y[d]: "<<y<< endl;
    cout<<"Value in y[d]: "<<*y<< endl;

    /**
     * operation for variable b
     * NOTE: by doing any operation
     */
    cout<<"==Pointer and Address Operations=="<< endl;

    cout<<"value in y[d]: "<<++(*y)<< endl;

    cout<<"\n";
}