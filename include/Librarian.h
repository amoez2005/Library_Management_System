#pragma once
#include "User.h"

class Librarian : public User {
public:
    Librarian(int i, std::string n);
    void show() const override;
};