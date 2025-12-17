#pragma once
#include <string>
using namespace std;

class User {
protected:
    int id;
    string name;
public:
    User(int i, string n);
    virtual ~User();
    int getId() const;
    string getName() const;
    virtual void show() const = 0;
};