/**
 * Task:
 *  Define a class Factorial and define an instance member function to find the Factorial of a number using class.
 */

#include <iostream>

using namespace std;

class Factorial{
    private:
        int num;
        int fact;

    public:
        void setNum(int x) {num = x;}
        int getNum() {return num;}
        int getFact() {return fact;}
        void calFact();
};

void Factorial::calFact()
{
    int f = 1;

    if(num <= 0)
    {
        fact = 1;
        return; //work like break
    }

    for(int i = 1; i <= num; i++)
    {
        f = f * i;
    }
    fact = f;
}

int main()
{
    int n;
    Factorial factorial;

    cout<<"Enter a Number to find Factorial ";
    cin>>n;
    factorial.setNum(n);
    factorial.calFact();
    cout<<"factorial of "<<factorial.getNum()<<" is "<<factorial.getFact()<<endl;

    return 0;
}