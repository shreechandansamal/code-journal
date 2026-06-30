/**
 * Task:
 *  Define a class ReverseNumber and define an instance member function to find 
 *  Reverse of a Number using class.
 */

#include <iostream>

using namespace std;

class Reverse{
    private:
        int actualNum;
        int reverseNum;

    public:
        void setActualNum(int x) {actualNum = x;}
        int getActualNum() {return actualNum;}
        int getReverseNum() {return reverseNum;}
        void calReverseNum();
};

void Reverse::calReverseNum()
{
    int divi = 10;
    int tempNum = actualNum;
    int remain;
    int count = 0;

    while(tempNum)
    {
        remain = tempNum % divi;
        tempNum = tempNum / divi;

        if(count == 0)
        {
            reverseNum = remain;
            count++;
        }
        else 
        {
            reverseNum = (reverseNum * 10) + remain;
        }
    }  
}

int main()
{
    int n;
    Reverse reverse;

    cout<<"Enter a Number for reverse ";
    cin>>n;
    reverse.setActualNum(n);
    reverse.calReverseNum();
    cout<<"Reverse Number of "<<reverse.getActualNum()<<" is "<<reverse.getReverseNum()<<endl;

    return 0;
}