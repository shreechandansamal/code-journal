/**
 * Task:
 *  Define a class student and write a program to enter student details
 *  using constructor and define member function to display all the details.
 */

#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    private:
        int id;
        char name[15];
        int age;
        int standard;
    public:
        Student(int a, const char b[], int c, int d) /* compiler will convert 
                                                      * const char b[] to const char* b */
        {
            id = a;
            strcpy(name, b);
            age = c;
            standard = d;
        }
        // void setDetails()
        void showDetails()
        {
            cout << "Id: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Standard: " << standard << endl;
        }
};

int main()
{
    Student student(1, "Chandan", 24, 10);
    student.showDetails();

    return 0;
}