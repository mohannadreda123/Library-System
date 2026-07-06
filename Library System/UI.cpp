#pragma once
#include<iostream>
using namespace std;

class UI
{
public:
	int Intro()
	{
		int sign;
		cout << "\n\t\t\t\t\t\t====================================";
		cout << "\n\t\t\t\t\t\tWelcome to New York Public Library🫡";
		cout << "\n\t\t\t\t\t\t====================================\n";
		cout << "1.Sign in as Admin\n\n";
		cout << "2.Sign in as User\n\n=> ";
		cin >> sign;
		return sign;
	}
	int Admin_Choice()
	{
		int choice;
		system("cls");
		cout << "1.Add Books to Library\n\n";
		cout << "2.Delete Books from Library\n\n";
		cout << "3.Check Books Data\n\n";
		cout << "=> ";
		cin >> choice;
		return choice;
	}
	int User_Choice()
	{
		int choice;
		system("cls");
		cout << "Choose the wanted Operation\n\n";
		cout << "1.Buy Books\n\n";
		cout << "2.Borrow Books\n\n";
		cout << "3.Book Inquiry\n\n";
		cout << "4.View shopping cart\n\n";
		cout << "=> ";
		cin >> choice;
		return choice;
	}
	bool again()
	{
		string answer;
		cout << "\n\nDo you want to do anther Operation?\n=> ";
		cin >> answer;
		for (int i = 0; i < answer.size(); i++)
		{
			answer[i] = tolower(answer[i]);
		}
		if (answer == "yes") { return true; }
		return false;
	}
	void buy()
	{
		cout << "\n\t\t\t\t\t\t=====================";
		cout << "\n\t\t\t\t\t\tHave a Nice Day...✌️!";
		cout << "\n\t\t\t\t\t\t=====================\n\n";
	}
};