/**
 * Task:
 *  Define a class StaticCount and create a static variable.
 *  Increment this variable in a function and call this 3 times
 *  and display the result.
 */

#include <iostream>

using namespace std;

class StaticCount{
    private:
        static int count;

    public:
        int getCount() {return count++;}
};

int StaticCount::count = 0; //init count here..

int main()
{
    StaticCount count;
    cout<<"count: "<<count.getCount()<<endl;
    cout<<"count: "<<count.getCount()<<endl;
    cout<<"count: "<<count.getCount()<<endl;
    return 0;
}