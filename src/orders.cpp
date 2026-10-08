#include "orders.h"

Order::Order(int id, string name, int copies, double price)
	: id(id), name(name), copiesNumber(copies), price(price) {}
void Order::displayOrder() {}
int Order::getCopiesNumber() { return copiesNumber; }