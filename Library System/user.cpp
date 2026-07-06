#pragma once
#include<iostream>
#include<string>
#include"person.cpp"
using namespace std;
class User : public Person
{
private:
	string address;
	ll phone;
public:
	void set_Info() override
	{
		Person::set_Info();
		string add;
		cout << "\nAdd your delivery address\n=> ";
		getline(cin, add);
		address = add;
		ll phone;
		cout << "\nAdd a contact number\n=> ";
		cin >> phone;
		this->phone = phone;
	}
	string get_Address()
	{
		return address;
	}
	ll get_Phone()
	{
		return phone;
	}
};