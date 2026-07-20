#pragma once
#include<iostream>
#include<string>
typedef long long ll;
using namespace std;
class Person
{
protected:
	string username;
public:
	virtual void set_Info()
	{
		string name;
		cout << "\nEnter your name\n=> ";
		if (cin.peek() == '\n') cin.ignore();
		getline(cin, name);
		username = name;	
	}
	string get_Username()
	{
		return username;
	}
	virtual ~Person() {};
};