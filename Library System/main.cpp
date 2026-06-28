#include<vector>
#include<ctime>
#include<cstdlib>
#include<iostream>
#include"customer.cpp"
#include"library.cpp"
#include"buy.cpp"
#include"borrow.cpp"
using namespace std;
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