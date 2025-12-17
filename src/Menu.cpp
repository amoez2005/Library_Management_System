#include "Menu.h"
#include "Book.h"
#include "Patron.h"
#include "Librarian.h"
#include <iostream>
using namespace std;

void Menu::run() {
    int choice;
    do {
        displayOptions();
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        handleChoice(choice);
    } while (choice != 0);
}

void Menu::displayOptions() {
    cout << "\n--- Library Management System ---" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Patron " << endl;
    cout << "3. Add Librarian " << endl;
    cout << "4. List All Items" << endl;
    cout << "5. List All Users" << endl;
    cout << "6. Checkout Item" << endl;
    cout << "7. Return Item" << endl;
    cout << "0. Exit" << endl;
    cout << "Choice: ";
}

void Menu::handleChoice(int choice) {
    if (choice == 1) {
        int id; string t, a;
        cout << "Book ID: "; cin >> id; cin.ignore();
        cout << "Title: "; getline(cin, t);
        cout << "Author: "; getline(cin, a);
        lib.addItem(make_unique<Book>(t, id, a));
    }
    else if (choice == 2) {
        int id; string n;
        cout << "User ID: "; cin >> id; cin.ignore();
        cout << "Name: "; getline(cin, n);
        lib.addUser(make_unique<Patron>(id, n));
    }
    else if (choice == 3) {
        int id; string n;
        cout << "Admin ID: "; cin >> id; cin.ignore();
        cout << "Name: "; getline(cin, n);
        lib.addUser(make_unique<Librarian>(id, n));
    }
    else if (choice == 4) {
        lib.listItems();
    }
    else if (choice == 5) {
        lib.listUsers();
    }
    else if (choice == 6) {
        int iId, uId;
        cout << "Enter Item ID: "; cin >> iId;
        cout << "Enter User ID: "; cin >> uId;
        lib.checkout(iId, uId);
    }
    else if (choice == 7) {
        int id;
        cout << "Enter Item ID to return: "; cin >> id;
        lib.returnItem(id);
    }
}