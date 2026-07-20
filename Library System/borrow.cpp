#pragma once
#include<iostream>
#include<vector>
#include<string>
#include "transaction.cpp"
using namespace std;
class Borrow
{
public:
	void borrow_book(const Transaction& trans, Library& l)
	{
		int i = trans.select_book(l);
		if (i != -1)
		{
			l.get_books()[i].status = "Borrowed";
			l.get_purchase().push_back({ l.get_books()[i].title, l.get_books()[i].ID, l.get_books()[i].status, l.get_books()[i].price / 2 });
			l.get_books().erase(l.get_books().begin() + i);
		}
	}
};