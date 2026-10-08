#pragma once
#include <iostream>
#include <string>
#include "member.h"
using namespace std;

class FacultyMember : public Member {
public:
	FacultyMember(string& name, string& email);
	bool booksLimit() override;
};