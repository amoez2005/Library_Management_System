#include "LibraryItem.h"
using namespace std;

LibraryItem::LibraryItem(string t, int i) : title(move(t)), id(i), checkedOut(false) {}
LibraryItem::~LibraryItem() = default;
int LibraryItem::getId() const { return id; }
string LibraryItem::getTitle() const { return title; }
bool LibraryItem::isCheckedOut() const { return checkedOut; }
void LibraryItem::checkOut() { checkedOut = true; }
void LibraryItem::returnItem() { checkedOut = false; }