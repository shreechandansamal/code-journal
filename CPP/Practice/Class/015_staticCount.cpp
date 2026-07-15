/**
 * Task:
 *  Define a class StaticCount and create a static variable.
 *  Increment this variable in a function and call this 3 times
 *  and display the result.
 * 
 * Learn:
 *  -how static keyword works.
 *  -how we can initialize the static properties (using constructor and 
 *                                                initialize with scope 
 *                                                scope resolution)
 */

#include <iostream>

using namespace std;

class StaticCount{
    private:
        static int count;

    public:
        StaticCount() { count = 0; }
        int incCount() {return count++;}
        int getCount() {return count;}
};

//initialize count here..
/* int StaticCount::count = 0;    not needed now as we have override
                                  the default constructor and that 
                                  will initialize property to 0 */
int StaticCount::count;

int main()
{
    StaticCount count;
    cout<<"Before Increment: "<<count.getCount()<<endl;
    count.incCount();
    cout<<"After Increment: "<<count.getCount()<<endl;
    count.incCount();
    cout<<"After Increment: "<<count.getCount()<<endl;
    count.incCount();
    cout<<"After Increment: "<<count.getCount()<<endl;
    return 0;
}