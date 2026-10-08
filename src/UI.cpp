#include "UI.h"

string UI::start() {
	cout << "\t\t\t\t\t============================================\n";
	cout << "\t\t\t\t\t\t* LIBRARY MANAGEMENT SYSTEM *\n";
	cout << "\t\t\t\t\t============================================\n\n";
	cout << "1. Books\n2. Members\n0. Exit\n";
	cout << "================================\n";
	cout << "Choose: ";
	string choice;
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, choice);
	cout << "\n\n";
	return choice;
}

string UI::book() {
	cout << "\t\t\t\t\t============================================\n";
	cout << "\t\t\t\t\t\t\t* Books *\n";
	cout << "\t\t\t\t\t============================================\n\n";
	cout << "1. Add Book\n2. Display Books\n3. Sort Books\n4. Search Book\n";
	cout << "5. Delete Book\n0. Back\n";
	cout << "================================\n";
	cout << "Choose: ";
	string choice;
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, choice);
	cout << "\n\n";
	return choice;
}

string UI::member() {
	cout << "\t\t\t\t\t============================================\n";
	cout << "\t\t\t\t\t\t\t* Members *\n";
	cout << "\t\t\t\t\t============================================\n\n";
	cout << "1. Add Member\n2. Display Members\n3. Sort Members\n4. Search Member\n";
	cout << "5. Display Member history\n6. Delete Book\n0. Back\n";
	cout << "================================\n";
	cout << "Choose: ";
	string choice;
	if (cin.peek() == '\n') cin.ignore();
	getline(cin, choice);
	cout << "\n\n";
	return choice;
}