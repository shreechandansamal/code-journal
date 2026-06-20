/**
 * Task:
 *  square of two input number and print it.
 * 
 * Learn:
 *  predefined library <iostream>.
 *  predefined objects cout, cin.
 *  predefined operator, i.e. insertion(<<) and extraction(>>).
 *  manupulator, i.e. endl works same as "\n".
 *  with and without namespace.
 */

#include <iostream>

/*method 1 (without namespace)*/
/*
int main()
{
int x, y;
std::cout<<"Enter a number";
std::cin>>x;
y = x * x;
std::cout<<"Square of "<<x<<" is "<<y;
std::cout<<"\n";
return 0;
}
*/

/*method 2 (with namespace)*/
using namespace std;
int main()
{
int x, y;
cout<<"Enter a number ";
cin>>x;
y = x * x;
cout<<"Square of "<<x<<" is "<<y<<endl;
return 0;
}

