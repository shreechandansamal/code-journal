/**
 * Task:
 *  Define a class Bill and define its member function get() to take detail of customer ,
 *  calculateBill() function to calculate electricity bill using below tariff :
 *   Upto 100 unit RS. 1.20 per unit
 *   From 100 to 200 unit RS. 2 per unit
 *   Above 200 units RS. 3 per unit.
 */

#include <iostream>
#include <cstring>

using namespace std;

class Bill
{
    private:
        char name[20];
        int consumerID;
        float unit;
    public:
        void get()
        {
            cout<<"Enter Consumer Details"<<endl;
            cout << "Name: ";
            cin.getline(name,20);

            cout << "Consumer ID: ";
            cin >> consumerID;

            cout << "Units: ";
            cin >> unit;
        }        
        void calculateBill()
        {
           float bill;

           if(unit < 100)
           {
                bill = unit * 1.20f;
           }
           else if(unit < 200)
           {
                bill = unit * 2.0f;
           }
           else
           {
                bill = unit * 3.0f;
           }
           cout<<"====================="<<endl;
           cout<<" Total Bill: "<<bill<<endl;
        }
};

int main()
{
    Bill consumer;
    consumer.get();
    consumer.calculateBill();
    return 0;
}