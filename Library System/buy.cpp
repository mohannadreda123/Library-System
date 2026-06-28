#include<iostream>
#include"library.cpp"
#include<vector>
using namespace std;
class Buy : public Library
{
	vector<string>paidBooks;
	vector<int>bookPrice;
	vector<int>booksNumber;
public:
	void add_BooksInfo()
	{
		if (confirm())
		{
			paidBooks.push_back(get_bookname());
			booksNumber.push_back(get_numberOfcopies());
			bookPrice.push_back(get_price() * get_numberOfcopies());
		}
	}
};