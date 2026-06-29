/**
 * Task:
 *  program to define a class to handle book record(bookId, title, price) also 
 *  define function userInputBook and displayBook to take input book data from user
 *  and display bok data on the screen.
 *
 */

 
#include <iostream>

using namespace std;

class Book
{
    private:
    int bookId;
    char title[20];
    float price;
    
    public:
    void displayBook()
    {
        cout<<"\n"<<bookId<<" "<<title<<" "<<price;
    }
    void userInputBook()
    {
        cout<<"Enter Book Details (bookId, title, price)"<<"\n";
        cin>>bookId;
        /*policy: guarding to not input negetive bookId*/
        if (bookId < 0)
            bookId =- bookId;
        cin.ignore();
        cin.getline(title, 20);
        cin>>price;
    }
};

int main(void)
{
    /**
     * here we can't access the properties or member of Book directly as they are 
     * private to that structure, so we can only use methods to access or update them.  
     */
    Book book1;
    book1.userInputBook();
    book1.displayBook();
    cout<<endl;

    return 0;
}
