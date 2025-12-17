#pragma once
#include "LibraryItem.h"
using namespace std;

class Book : public LibraryItem {
    string author;
public:
    Book(string t, int i, string a);
    void show() const override;
};