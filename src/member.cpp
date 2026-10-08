#include "member.h"

int Member::nextID = 1;
int Member::setBorrowedBooks = 0;

Member::Member(string& name, string& email) : name(name), email(email) { ID = nextID++; }

void Member::display() {
	cout << ID;
	NiceView::spaces(ID);
	cout << name;
	NiceView::spaces(name);
	cout << email;
	NiceView::spaces(email);
	cout << borrowedBooks;
	NiceView::spaces(borrowedBooks);
}

void Member::setBorrowedBook() {

}

string Member::getName() { return name; }
string Member::getEmail() { return email; }
int Member::getID() { return ID; }
int Member::getBorrowedBook() { return borrowedBooks; }