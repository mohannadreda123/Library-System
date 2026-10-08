#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "member.h"
#include "book.h"
using namespace std;

class Algorithms {
public:
	static void sortBooks(vector<Book>&book);
	static void sortMembers(vector<Member*>&member);
	static int searchBook(vector<Book>&book, string& target);
	static int searchMember(vector<Member*>&member, string& target);
};