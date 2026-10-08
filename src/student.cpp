#include "student.h"

Student::Student(string& name, string& email) : Member(name, email) {}

bool Student::booksLimit() { return borrowedBooks = 7; }