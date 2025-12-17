#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string t, int i, string a) : LibraryItem(move(t), i), author(move(a)) {}
void Book::show() const {
    cout << "Book ID: " << id << " | Title: " << title << " | Author: " << author 
         << " | Status: " << (checkedOut ? "Checked out" : "Available") << endl;
}