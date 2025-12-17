#pragma once
#include <string>
using namespace std;

class LibraryItem {
protected:
    string title;
    int id;
    bool checkedOut;
public:
    LibraryItem(string t, int i);
    virtual ~LibraryItem();
    int getId() const;
    string getTitle() const;
    bool isCheckedOut() const;
    void checkOut();
    void returnItem();
    virtual void show() const = 0;
};