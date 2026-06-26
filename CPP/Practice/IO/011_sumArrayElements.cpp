#include <iostream>

using namespace std;

int main()
{
    int count = 10;
    int num[count] = {0};
    int Total = 0;
    
    cout<<"Enter Ten Numbers for Sum: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>num[i];
        // cout<<"DEBUG: input number is "<<num[i]<<endl;
        Total += num[i]; 
        // cout<<"DEBUG: current Total is "<<Total<<endl;
    }
       
    cout<<"Sum of total number is "<<Total<<endl;

    return 0;
}