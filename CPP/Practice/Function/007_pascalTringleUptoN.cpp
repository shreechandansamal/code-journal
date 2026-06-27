/**
 * Task:
 *  Define a function to print Pascal Triangle up to N lines.
 * 
 *          1            =              0c0
 *        1   1          =            1c0 1c1
 *      1   2   1        =          2c0 2c1 2c2 
 *    1   3   3   1      =        3c0 3c1 3c2 3c3
 *  1   4   6   4   1    =      4c0 4c1 4c2 4c3 4c4
 * 
 * 
 */

#include <iostream>

using namespace std;

int fact(int x);
int comb(int n, int r);

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int k = 0;

            if (j == 0)
            {
                while (k++ <= (2 - i + 1))
                {
                    cout<<" ";
                }
            }
            cout<<" "<<comb(i, j);  
        }
        cout<<"\n";
    }
   return 0; 
}

//factorial
int fact(int x)
{
    int fact = 1;

    if(x <= 0)
    {
        return 1;
    }

    for(int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    
    return fact;
}

//nCr
int comb(int n, int r)
{
    int comb = fact(n) / (fact(r) * fact(n-r));
    return comb;
}