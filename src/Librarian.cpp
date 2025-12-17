#include "Librarian.h"
#include <iostream>
using namespace std;

Librarian::Librarian(int i, string n) : User(i, move(n)) {}

void Librarian::show() const {
    cout << "ADMIN (Librarian) ID: " << id << " | Name: " << name << endl;
}