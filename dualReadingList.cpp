#include <iostream>
#include <fstream>
#include "linkedlist.h"
using namespace std;


int main(){

    int choice = 0;
    string fiction;
    string book;
    linkedListType<string> list1; //fiction
    linkedListType<string> list2; //nonfiction

    while (choice != 5){


    cout << "\n-----Dual Reading List Manager-----" << endl;
    cout << "1. Add a book to a list" << endl;
    cout << "2. Remove a book by title from a list" << endl;
    cout << "3. Display all books in a list" << endl;
    cout << "4. Display the total number of books in both lists" << endl;
    cout << "5. Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        
        case 1:
            cout << "Which list? (F for Fiction, NF for Non-Fiction): ";
            cin >> fiction;

            while (fiction != "F" && fiction != "NF"){
                cout << "Invalid input. Please either F for Fiction or NF for Non-Fiction: ";
                cin >> fiction;
            }

            cout << "Enter the book title to add: ";
            cin.ignore();
            getline(cin, book);

            if (fiction == "F"){
                list1.insertLast(book);
                cout << "Book: '" << book << "' added to the Fiction list" << endl;
            } else if (fiction == "NF"){
                list2.insertLast(book);
                cout << "Book: '" << book << "' added to the Non-Fiction list" << endl;
            }
            break;

        case 2:
            cout << "Which list? (F for Fiction, NF for Non-Fiction): ";
            cin >> fiction;

            while (fiction != "F" && fiction != "NF"){
                cout << "Invalid input. Please either F for Fiction or NF for Non-Fiction: ";
                cin >> fiction;
            }

            cout << "Enter the book title to remove: ";
            cin.ignore();
            getline(cin, book);

            if (fiction == "F"){
                list1.deleteNode(book);
            } else if (fiction == "NF"){
                list2.deleteNode(book);
            }
            break;

        case 3:
            cout << "Which list? (F for Fiction, NF for Non-Fiction): ";
            cin >> fiction;

            while (fiction != "F" && fiction != "NF"){
                cout << "Invalid input. Please either F for Fiction or NF for Non-Fiction: ";
                cin >> fiction;
            }

            if (fiction == "F"){
                list1.print();
            } else if (fiction == "NF"){
                list2.print();
            }
            break;

        case 4:
            
            //add books from both lists
            cout << "Total books in both lists: " << list1.length() + list2.length() << endl;
            break;
    }

    };

    cout << "Exiting program." << endl;

return 0;
}
