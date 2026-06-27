/**
 * Task:
 *  Define a function to check whether a given number is a term in a Fibonacci series or not.
 */

#include <iostream>

using namespace std;

int fib(int n);

int main()
{
    int n, flag = 0;
    cout<<"Enter Number"<<endl;
    cin>>n;

    for(int i = 1; ;i++) //infinite lop
    {
        int value = fib(i);
        cout<<value<<" ";

        if(n == value)
        {
            flag = 1;
            break;
        }
        if(value > n)
        {
            break;
        }
    }
    cout<<"\n";

    if(flag == 1)
    {
        cout<<"Number is in Fibonacci\n";
    }
    else 
    {
        cout<<"Number is not in Fibonacci\n";
    }
    return 0;
}

int fib(int n)
{
    int f1 = 1, f2 = 1, temp;

    if(n <= 2)
    {
        return 1;
    }

    for(int i = 3; i <= n; i++)
    {
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    return f2;
}