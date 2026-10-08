#include "facultyMember.h"

FacultyMember::FacultyMember(string& name, string& email) : Member(name, email) {}

bool FacultyMember::booksLimit() { return borrowedBooks = 10; }