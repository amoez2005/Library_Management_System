#include "Patron.h"
#include <iostream>
using namespace std;

Patron::Patron(int i, string n) : User(i, move(n)) {}

void Patron::show() const {
    cout << "User (Patron)    ID: " << id << " | Name: " << name << endl;
}