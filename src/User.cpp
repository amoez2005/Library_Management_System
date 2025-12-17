#include "User.h"
using namespace std;

User::User(int i, string n) : id(i), name(move(n)) {}
User::~User() = default;
int User::getId() const { return id; }
string User::getName() const { return name; }