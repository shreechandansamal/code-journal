/**
 * Task: 
 *  Write a C++ program to add all the numbers of an array of size 10.
 * 
 * Update:
 *  in a single for loop cin and sum is actually not meaningful, 
 *  because in that case we are actually not using the array for
 *  the sum thats why by twice the for loop do the correct thing,
 *  first for loop will store the 10 numbers into array, next for
 *  loop will retrive the values one by one and add with each other
 *  to find the total value. 
 */

#include <iostream>

using namespace std;

int main()
{
    int count = 10;
    int num[count] = {0};
    int Total = 0;
    
    cout<<"Enter Ten Numbers for Sum: "<<endl;

    //store 10 numbers into array
    for (int i = 0; i < count; i++)
    {
        cin>>num[i];
        // cout<<"DEBUG: input number is "<<num[i]<<endl;
    }

    //retrive those 10 number value and add one by one
    for (int i = 0; i < count; i++)
    {
        Total += num[i]; 
        // cout<<"DEBUG: current Total is "<<Total<<endl;
    }
       
    cout<<"Sum of total number is "<<Total<<endl;

    return 0;
}