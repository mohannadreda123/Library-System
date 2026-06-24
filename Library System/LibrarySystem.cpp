#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
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
class Library
{
protected:
	string bookname;
	int Price, CopiesNumber, borrowTime;
public:
	string set_UserName()
	{
		string username;
		cout << "Enter your name\n=> ";
		cin >> username;
		return username;
	}
	string set_Address()
	{
		string add;
		cout << "\nAdd your delivery address\n=> ";
		cin >> add;
		return add;
	}
	long long set_Phone()
	{
		long long phone;
		cout << "\nAdd a contact number\n=> ";
		cin >> phone;
		return phone;
	}
	int Operation()
	{
		int operation;
		system("cls");
		cout << "Choose the wanted Operation\n\n";
		cout << "1.Buy Books\n\n2.Book Inquiry\n\n";
		cout << "=> ";
		cin >> operation;
		return operation;
	}
	void set_bookName()
	{
		string name;
		system("cls");
		cout << "Enter the book name\n=> ";
		cin >> name;
		bookname = name;
	}
	string get_bookname()
	{
		return bookname;
	}
	int bookNumber()
	{
		int numberOfbooks;
		cout << "\nEnter the number of books\n\n=> ";
		cin >> numberOfbooks;
		return numberOfbooks;
	}
	bool availability()
	{
		srand(time(0));
		int num = rand() % 2;
		return num;
	}
	void set_price()
	{
		srand(time(0));
		int price = ((rand() % 10) + 1) * 10;
		Price = price;
	}
	int get_price()
	{
		return Price;
	}
	void exist(int price)
	{
		cout << "\nBook is available! [" << bookname << "] << is in stock.\nPrice: [" << Price << "$].\n\n";
	}
	void notExist()
	{
		cout << "\nSorry, this book is currently unavailable.\nYou can search for another book or check back later.\n\n";
	}
	bool confirm()
	{
		string answer;
		cout << "Add to Cart?\n";
		cin >> answer;
		for (int i = 0; i < answer.size(); i++)
		{
			answer[i] = tolower(answer[i]);
		}
		system("cls");
		if (answer == "yes") { return true; }
		return false;
	}
	void set_numberOfcopies()
	{
		int number;
		cout << "\nEnter the number of copies you want\n=> ";
		cin >> number;
		CopiesNumber = number;
	}
	int get_numberOfcopies()
	{
		return CopiesNumber;
	}
	void set_borrowTime()
	{
		int time;
		cout << "\nHow long do you want to borrow the book for?\n";
		cin >> time;
		cout << "\n";
		borrowTime = time;
	}
	int get_borrowTime()
	{
		return borrowTime;
	}
	bool final(string name, string address, long long number)
	{
		cout << "Your contact Information\n";
		cout << "Your name : " << name;
		cout << "\nYour Address : " << address;
		cout << "\nYour Phone Number : " << number;
		string answer;
		cout << "\n\nConfirm?\n";
		cin >> answer;
		for (int i = 0; i < answer.size(); i++)
		{
			answer[i] = tolower(answer[i]);
		}
		if (answer == "yes") { return true; }
		return false;
	}
};
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
int main()
{
	Library user;
	cout << "\t\t\t\t\t\tWelcome to New York Public Library\n\n";
	string username = user.set_UserName();
	string address = user.set_Address();
	long long phone = user.set_Phone();
	Customer cust(phone, address, username);
	int opertaion_number = user.Operation();
	user.set_bookName();
	if (user.availability())
	{
		user.set_price();
		user.set_numberOfcopies();
		user.exist(user.get_price());
		switch (opertaion_number)
		{
		case 1:
		{
			Buy buy;
			buy.add_BooksInfo();
			if (user.final(username, address, phone))
			{
				cout << "Enjoy with Your New Book.";
			}
			break;
		}
		case 2:
		{
			user.set_borrowTime();
			Borrow borrow;
			borrow.add_borrowInfo();
			if (user.final(username, address, phone))
			{
				cout << "Enjoy with Your New Book.";
			}
			break;
		}
		}
	}
	else { user.notExist(); }
	return 0;
}