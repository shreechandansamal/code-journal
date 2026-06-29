/**
 * Task:
 *  Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
 *  number of instance member variables and also define instance member functions to
 *  set values for time and display values of time.
 */

#include <iostream>

using namespace std;

class Time{
    private:
        int hr;
        int min;
        int sec;

    public:
        void setTime(int x, int y, int z) {hr = x; min = y; sec = z;}
        void displayTime() {cout<<"Time is "<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;}
};

int main()
{
    
    Time time;
    int h, m, s;

    cout<<"Enter Time"<<endl;
    cin>>h>>m>>s;
    time.setTime(h, m, s);
    time.displayTime();

    return 0;
}