#include "book.h"

Book::Book(string& name, string& id, string& author, string& copy, string& price) 
	: name(name), ID(stoi(id)), author(author), copies(stoi(copy)), price(stof(price)) {
}

void Book::display() {
	cout << ID;
	NiceView::spaces(ID);
	cout << name;
	NiceView::spaces(name);
	cout << author;
	NiceView::spaces(author);
	cout << price;
	NiceView::spaces(price);
	cout << "\n";
}

int Book::getID() { return ID; }
int Book::getCopies() { return copies; }
string Book::getName() { return name; }
string Book::getAuthor() { return author; }
double Book::getPrice() { return price; }