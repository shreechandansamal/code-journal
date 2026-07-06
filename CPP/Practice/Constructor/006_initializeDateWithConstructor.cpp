/**
 * Task:
 *  Define a class Date and write a program to Display Dateand initialise date object 
 *  using Constructors.
 */

#include <iostream>

using namespace std;

class Date
{
    private:
        int dd;
        int mm;
        int yyyy;
    public:
        Date(int day, int month, int year) { dd = day; mm = month, yyyy = year; }
        void setDate(int day, int month, int year) { dd = day; mm = month, yyyy = year; }
        Date getdate() 
        { 
            Date temp(0,0,0);
            temp.dd = dd;
            temp.mm = mm;
            temp.yyyy = yyyy;
            return temp; 
        }
        void showDate()
        {
            cout<<dd<<":"<<mm<<":"<< yyyy<<endl;
        }
};

int main()
{
    Date date(06, 07, 2026);
    // Date tempdate(0, 0, 0);
    // tempdate = date.getdate();
    // tempdate.showDate();
    date.showDate();

    return 0;
}