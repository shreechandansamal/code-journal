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
};

struct Book userInputBook();
void displayBook(struct Book);

int main(void)
{
    struct Book book1 = {1, "C", 425.50f}; //initializing while creating the object
    struct Book book2, book3; //not initializing while creating the object
    book2.bookId = 2;
    strcpy(book2.title, "Cpp");
    book2.price = 324.75f;
    book3 = userInputBook();

    displayBook(book1);
    displayBook(book2);
    displayBook(book3);
    cout<<endl;

    return 0;
}

struct Book userInputBook()
{
    struct Book tempbook;
    cout<<"Enter 3rd Book bookId, title, price "<<"\n";
    cin>>tempbook.bookId;
    cin.ignore(); /* like fflush in c, in cpp we use ignore to clear unwanted
                     characters from the input buffer*/
    cin.getline(tempbook.title, 20); /* like fgets() in c, getline is for user input
                                        multiple word string in cpp, and 20 is max
                                        get input string include null character and
                                        "cin>>tempbook.title" can't handle multiple
                                        word string. */
    cin>>tempbook.price;
    return tempbook;
}

void displayBook(struct Book tempbook)
{
    cout<<"\n"<<tempbook.bookId<<" "<<tempbook.title<<" "<<tempbook.price;
}