#include "Library.h"
#include <iostream>
using namespace std;

void Library::addItem(unique_ptr<LibraryItem> item) { items.push_back(move(item)); }
void Library::addUser(unique_ptr<User> u) { users.push_back(move(u)); }

LibraryItem* Library::findItem(int itemId) {
    for (auto& i : items) if (i->getId() == itemId) return i.get();
    return nullptr;
}

User* Library::findUser(int userId) {
    for (auto& u : users) if (u->getId() == userId) return u.get();
    return nullptr;
}

void Library::listItems() const {
    if (items.empty()) { cout << "No items." << endl; return; }
    for (auto& i : items) i->show();
}

void Library::listUsers() const {
    if (users.empty()) { cout << "No users." << endl; return; }
    for (auto& u : users) u->show();
}

void Library::checkout(int itemId, int userId) {
    LibraryItem* item = findItem(itemId);
    User* user = findUser(userId);
    if (item && user && !item->isCheckedOut()) {
        item->checkOut();
        cout << "Success." << endl;
    } else {
        cout << "Failed." << endl;
    }
}

void Library::returnItem(int itemId) {
    LibraryItem* item = findItem(itemId);
    if (item && item->isCheckedOut()) {
        item->returnItem();
        cout << "Returned." << endl;
    }
}