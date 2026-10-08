#include "algorithms.h"

void Algorithms::sortBooks(vector<Book>&book) {
	for (int i = 0; i < book.size(); i++) {
		int mnindex = i;
		for (int j = i; j < book.size(); j++) {
			if (book.at(j).getPrice() < book.at(mnindex).getPrice()) mnindex = j;
		}
		swap(book.at(i), book.at(mnindex));
	}
}
int Algorithms::searchBook(vector<Book>& book, string& target) {
	sortBooks(book);
	int first = 0;
	int last = book.size() - 1;
	int mid = (last + first) / 2;
	while (first <= last) {
		if (book.at(mid).getID() == stoi(target)) return mid;
		else if (book.at(mid).getID() > stoi(target)) first = mid + 1;
		else last = mid - 1;
	}
	return -1;
}
void Algorithms::sortMembers(vector<Member*>&member) {
//	for (int i = 0; i < member.size(); i++) {
//		int mnindex = i;
//		for (int j = i; j < member.size(); j++) {
//			if (member.at(j).getName() < member.at(mnindex).getName()) mnindex = j;
//		}
//		swap(member.at(i), member.at(mnindex));
//	}
}

int Algorithms::searchMember(vector<Member*>&member, string& target) {
	sortMembers(member);
	return 0;
}