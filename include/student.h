#pragma once
#include <iostream>
#include <string>
#include "member.h"
using namespace std;

class Student : public Member {
public:
	Student(string& name, string& email);
	bool booksLimit() override;
};