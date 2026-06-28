#include<iostream>
using namespace std;
class Customer
{
protected:
	string name, address;
	long long number;
public:
	Customer(long long number, string address, string name)
	{
		this->name = name;
		this->address = address;
		this->number = number;
	}
};