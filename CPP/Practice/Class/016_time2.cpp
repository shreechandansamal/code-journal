/**
 * Task:
 *  Define a class Time to represent a time with instance variables h,m and s to store
 *  hour, minute and second. Also define following member functions
 *  a. void setTime(int,int,int)
 *  b. void showTime()
 *  c. void normalize() //e.g. if user input 7h:65min as 65 min never exits so it will 
 *                      // be normalize like 65min = 60 + 5 min, 60 min = 1h 
 *                      // now if we write the normalize form, 8h:05min
 *                      //adv. if 24h normalize then we can move to days... 
 *  d. Time add(Time)
 */

#include <iostream>

using namespace std;

class Time{
    private:
        int hr;
        int min;
        int sec;

    public:
        void setTime(int x, int y, int z) { hr = x; min = y; sec = z; }
        void showTime(void) { cout<<"Time is "<<hr<<":"<<min<<":"<<sec<<endl; }
        void normalize(void) 
        { //e.g. 07:50:72
            min = min + sec / 60; //51 min (how: sec/60 = 72/60 = 1, min+sec = 50+1 = 51)
            sec = sec % 60; //12sec (how: 72 % 60 = 12)
            hr = hr + min / 60; //07hr (how: min/60 = 51/60 = 0, hr+min = 7+0 = 7)
            min = min % 60; //51min (how: 51%60 = 51)
        }//so it will be 07hr 51min 12sec 
        Time add(Time t) 
        { 
            Time temp;
            temp.hr = hr + t.hr;
            temp.min = min + t.min;
            temp.sec = sec + t.sec;
            temp.normalize();
            return temp; 
        }
};

int main()
{
    
    Time time, temptime, newtime;
    int h, m, s;

    cout<<"Enter Time"<<endl;
    cin>>h>>m>>s;
    time.setTime(h, m, s);
    time.normalize();
    time.showTime();

    cout<<"Add Time"<<endl;
    cin>>h>>m>>s;
    temptime.setTime(h, m, s);
    temptime.normalize();
    newtime = time.add(temptime);
    newtime.showTime();

    return 0;
}