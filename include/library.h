#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "isValid.h"
#include "member.h"
#include "algorithms.h"
#include "student.h"
#include "facultymember.h"
using namespace std;

class Library {
private:
	vector<Book>books;
	vector<Member*>members;
public:
	void addBook();
	void viewBooks();
	void sortBooks();
	void searchBook();
	void deleteBook();
	void addMember();
	void viewMembers();
	void sortMembers();
	void searchMember();
	//void viewMemberHistory();
	void deleteMember();
	//void requestBook();
	//void viewOrdersQueue();
	//void deliveryNextBook();
};