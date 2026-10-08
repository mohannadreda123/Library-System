#pragma once
#include <iostream>
#include <string>
using namespace std;

class Order {
private:
	int id, copiesNumber;
	string name;
	double price;
public:
	Order(int id, string name, int copies, double price);
	void displayOrder();
	int getCopiesNumber();
};