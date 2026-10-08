#include "isValid.h"

bool IsValid::isValidId(string& id) {
	for (char ch : id) if (!(isdigit(ch))) return false;
	return true;
}
bool IsValid::isValidPrice(string& fee) {
	for (char ch : fee) if (!isdigit(ch) && !(ch == '.')) return false;
	return true;
}