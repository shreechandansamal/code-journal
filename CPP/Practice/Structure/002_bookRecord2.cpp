/**
 * Task:
 *  program to define a structure to handle book record(bookId, title, price) also 
 *  define function userInputBook and displayBook to take input book data from user
 *  and display bok data on the screen.
 */

 
#include <iostream>
#include <string.h>

using namespace std;

struct Book
{
    int bookId;
    char title[20];
    float price;
    void displayBook()
    {
        cout<<"\n"<<bookId<<" "<<title<<" "<<price;
    }

    void userInputBook()
    {
        cout<<"Enter 3rd Book bookId, title, price "<<"\n";
        cin>>bookId;
        cin.ignore();
        cin.getline(title, 20);
        cin>>price;
    }
};

int main(void)
{
    Book book1 = {1, "C", 425.50f}; //can use struct keyword or can skip it
    Book book2, book3;
    book2.bookId = 2;
    strcpy(book2.title, "Cpp");
    book2.price = 324.75f;
    book3.userInputBook();

    book1.displayBook();
    book2.displayBook();
    book3.displayBook();
    cout<<endl;

    return 0;
}
