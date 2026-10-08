#pragma once
#include <iostream>
#include <string>
#include "niceView.h"
using namespace std;

class Book {
private:
	int ID, copies;
	string name, author;
	double price;
public:
	Book(string& name, string& id, string& author, string& copy, string& price);
	void display();
	int getID();
	int getCopies();
	string getName();
	string getAuthor();
	double getPrice();
};