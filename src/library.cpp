#include "library.h"

// Book Functions
void Library::addBook() {
	string name, author;
	string id, copies, price;
	cout << "Book Name : ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, name);
	cout << "\nBook ID : ";
	while (true) {
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, id);
		if (IsValid::isValidId(id)) break;
	}
	cout << "\nAuthor : ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, author);
	cout << "\nPrice : ";
	while (true) {
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, price);
		if (IsValid::isValidPrice(price)) break;
	}
	cout << "\nCopies : ";
	while (true) {
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, copies);
		if (IsValid::isValidId(id)) break;
	}
	Book book(name, id, author, copies, price);
	books.push_back(book);
	cout << "\n\n[OK] Book " << book.getName() << " added.\n\n";
}

void Library::viewBooks() {
	if (books.empty()) {
		cout << "*{ There are No Books to Display }*\n\n\n";
		return;
	}
	cout << "ID\t\t\tNAME    \t\tAUTHOR     \t\tPRICE\n";
	cout << "--\t\t\t----\t\t\t------\t\t\t-----\n";
	for (int i = 0; i < books.size(); i++) { books.at(i).display(); }
	cout << "\n";
	for (int i = 0; i < 80; i++) cout << "=";
	cout << "\n\n";
}

void Library::sortBooks() { Algorithms::sortBooks(books); }

void Library::searchBook() {
	if (books.empty()) {
		cout << "*{ Library is Empty }*\n\n";
		return;
	}
	string id;
	while (true) {
		cout << "Book ID : ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, id);
		if (IsValid::isValidId(id)) break;
	}
	int found = Algorithms::searchBook(books, id);
	if (found != -1) {
		books.at(found).display();
		cout << "\n============================\n\n";
		return;
	}
	cout << "*{ Book Not Found }*\n\n";
}

void Library::deleteBook() {
	string id;
	cout << "Book ID : ";
	while (true) {
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, id);
		if (IsValid::isValidId(id)) break;
	}
	int found = Algorithms::searchBook(books, id);
	if (found != -1) {
		books.erase(books.begin() + found);
		return;
	}
	cout << "*{ Book Not Found }*\n\n";
}

// Member Functions
void Library::addMember() {
	Member* member;
	string name, email, type;
	cout << "Name : ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, name);
	cout << "\nEmail : ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, email);
	cout << "\nSelect Type (1. for Student / 2. for Faculty) : ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, type);
	if (type == "1") member = new Student(name, email);
	else member = new FacultyMember(name, email);
	members.push_back(member);
	cout << "\n\n*{ " << member->getName() << " Added. }*\n\n";
}

void Library::viewMembers() {
	cout << "ID\t\t\tName\t\t\tEmail\t\t\tBorrowedBooks\n";
	cout << "--\t\t\t----\t\t\t-----\t\t\t-------------\n";
	for (int i = 0; i < members.size(); i++) { members.at(i)->display(); }
	cout << "\n\n";
	for (int i = 0; i < 85; i++) cout << "=";
	cout << "\n\n";
}

//void Library::sortMembers() {
//	Algorithms::sortMembers(members)
//}

//void Library::searchMember() {
//
//}

void Library::deleteMember() {
	string id;
	cout << "Member ID : ";
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, id);
}