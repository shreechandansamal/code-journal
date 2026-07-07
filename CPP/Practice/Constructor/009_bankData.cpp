/**
 * Task:
 *  Define a class Bank and define member functions to read principal ,
 *  rate of interest and year. Another member functions to calculate simple interest
 *  and display it. Initialise all details using constructor.
 */

#include <iostream>
#include <cstring>

using namespace std;

class Bank
{
    private:
        float principal;
        float roi;
        float year;
    public:
        Bank(float p, float r, float y)
        {
            principal = p;
            roi = r;
            year = y;
        }
        void setDetails(float p, float r, float y)
        {
            principal = p;
            roi = r;
            year = y;
        }
        void calSimpleIntrest()
        {
            cout<<"Rate Of Interest(p:"<<principal<<", r:"<<roi<<", y:"<<year<<") is: "<<(principal * roi * year) / 100<<endl;
        }
};

int main()
{
    Bank holder1(1000, 5, 3), holder2(2000, 5, 3);
    holder1.calSimpleIntrest();
    holder2.calSimpleIntrest();
    return 0;
}