#include<iostream>
#include<vector>
#include"library.cpp"
using namespace std;
class Borrow : public Library
{
private:
	vector<int>borrowTime;
	vector<string>borrowedBooks;
	vector<int>borrowPrice;
	vector<int>borrowNumber;
public:
	void add_borrowInfo()
	{
		if (confirm())
		{
			borrowedBooks.push_back(get_bookname());
			borrowPrice.push_back((get_price() * get_numberOfcopies()) / 2);
			borrowNumber.push_back(get_numberOfcopies());
			borrowTime.push_back(get_borrowTime());
		}
	}
};