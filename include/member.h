#pragma once
#include <iostream>
#include <string>
#include "niceView.h"
using namespace std;

class Member {
protected:
	string name, email;
	int ID, borrowedBooks;
	static int nextID, setBorrowedBooks;
	//History history;
public:
	Member(string& name, string& email);
	void display();
	virtual bool booksLimit() = 0;
	string getName();
	string getEmail();
	int getID();
	void setBorrowedBook();
	int getBorrowedBook();
};