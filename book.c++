#include<iostream>
using namespace std;

class Book
        {
                private:
                        int isbn;
                        char b_name[30];
                        float price;
                        char author[30];
                
                public:
                       void put_details();
                       void get_details();
        };
        

void Book::put_details(void)
        {
                cout << "enter the book name\n";
                cin >> b_name;
                cout << "enter the isbn_no\n";
                cin >> isbn;
                cout << "enter the price of the book\n";
                cin >> price;
                cout << "enter the author of the book\n";
                cin >> author;
        }
        
void Book::get_details(void)
        {
                cout << "Entered book details are\n";
                cout << "Book Name:\t"<< b_name << "\nisbn:\t" << isbn << "\nPrice of the book is:\t" << price << "\n Author of the book is:\t" << author;
        }
        
        
        int main()
                {
                        int maximum = 20, n,i;
                        cout << "please enter the number of records you want to save\n \n";
                        cin >> n;
                        
                        
                        if(n <= maximum)
                                
                                {
                                        Book book[n];
                                        cout << "pls enter the book details\n";
                                        
                                        for(i = 0; i<n; i++)
                                                {
                                                        book[i].put_details();
                                                }
                                        
                                        cout << "the book details are: ";
                                        for(i = 0; i<n; i++)
                                                {
                                                        book[i].get_details();
                                                }
                                 }
                                 
                        else
                                {
                                        cout << "maximum 20 record can be entered";
                                }
                                
               }
