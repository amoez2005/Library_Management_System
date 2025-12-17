#pragma once
#include "Library.h"
using namespace std;
class Menu {
    Library lib;
public:
    void run();
private:
    void displayOptions();
    void handleChoice(int choice);
};