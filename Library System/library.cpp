#include<iostream>
using namespace std;
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