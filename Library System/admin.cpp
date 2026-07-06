#pragma once
#include<iostream>
#include<string>
#include"person.cpp"
using namespace std;
class Admin : public Person
{
private:
	string password = "12345678$";
public:
	void set_Info() override
	{
		bool check = true;
		do
		{
			Person::set_Info();
			string pass;
			cout << "\nEnter the Password\n=> ";
			cin >> pass;
			if (password == pass) { check = false; }
			else { cout << "\nSomething Wrong! Enter the Correct Info\n"; }
		} while (check);
	}
};