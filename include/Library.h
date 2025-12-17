#pragma once
#include <memory>
#include <vector>
#include "LibraryItem.h"
#include "User.h"
using namespace std;
class Library {
    vector<unique_ptr<LibraryItem>> items;
    vector<unique_ptr<User>> users;
public:
    void addItem(unique_ptr<LibraryItem> item);
    void addUser(unique_ptr<User> u);
    LibraryItem* findItem(int itemId);
    User* findUser(int userId);
    void listItems() const;
    void listUsers() const;
    void checkout(int itemId, int userId);
    void returnItem(int itemId);
};