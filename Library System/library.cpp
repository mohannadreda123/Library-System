#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Book {
    string title, ID, status;
    double price;
};
class Library
{
private:
    vector<Book> books = {
        {"Don Quixote", "978-0060934347", "Exist", 16.99},
        {"A Tale of Two Cities", "978-0141439600", "Exist", 8.00},
        {"The Little Prince", "978-0156012195", "Exist", 6.50},
        {"The Alchemist", "978-0062315007", "Exist", 14.25},
        {"1984", "978-0451524935", "Exist", 9.99},
        {"The Great Gatsby", "978-0743273565", "Exist", 15.00},
        {"Crime and Punishment", "978-0140449136", "Exist", 12.49}
    };
    vector<Book>purchase = {};
public:
	void view_existed_Books()
	{
        system("cls");
        if (books.empty())
        {
            cout << "The Library is Empty.";
        }
        else
        {
            cout << "Title:\t\t\t\t\tID:\t\t\t\tStatus:\t\t\t\tPrice:\n\n";
            for (int i = 0; i < books.size(); i++)
            {
                cout << books[i].title;
                if (books[i].title.size() < 30)
                {
                    for (int j = books[i].title.size(); j <= 30; j++)
                    {
                        cout << " ";
                    }
                }
                cout << "\t\t" << books[i].ID;
                cout << "\t\t\t" << books[i].status;
                cout << "\t\t\t\t" << books[i].price << "$\n\n";
            }
        }
	}
    void Add_books()
    {
        string name, ID, status;
        double price;
        cout << "\nEnter Book Name:\n=> ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter Book ID:\n=> ";
        cin >> ID;
        for (int i = 0; i < books.size(); i++)
        {
            if (books[i].title == name || books[i].ID == ID)
            {
                cout << "This Book is Already Exist.";
                return;
            }
        }
        cout << "\nSet a book status\n=> ";
        cin >> status;
        cout << "\nSet a price for the book\n=> ";
        cin >> price;
        books.push_back({ name, ID, status, price });
        cout << "\nBook Added Successfully!\n\n";
    }
    void Delete_books()
    {
        string name;
        cout << "\nEnter Book Name\n=> ";
        cin.ignore();
        getline(cin, name);
        for (int i = 0; i < books.size(); i++)
        {
            if (books[i].title == name)
            {
                books.erase(books.begin() + i);
                cout << "\nBook Deleted Successfully!";
                return;
            }
        }
        cout << "\nThis Book isn't Exist.\n\n";
    }
    void view_card()
    {
        system("cls");
        if (purchase.empty())
        {
            cout << "The card is Empty";
        }
        else
        {
            cout << "Title:\t\t\t\t\tID:\t\t\t\tStatus:\t\t\t\tPrice:\n\n";
            for (int i = 0; i < purchase.size(); i++)
            {
                cout << purchase[i].title;
                if (purchase[i].title.size() < 30)
                {
                    for (int j = purchase[i].title.size(); j <= 30; j++)
                    {
                        cout << " ";
                    }
                }
                cout << "\t\t" << purchase[i].ID;
                cout << "\t\t\t" << purchase[i].status;
                if (purchase[i].status.size() < 10)
                {
                    for (int j = purchase[i].status.size(); j <= 30; j++)
                    {
                        cout << " ";
                    }
                }
                cout << "\t" << purchase[i].price << "$\n\n";
            }
        }
    }
    void buy_book()
    {
        string name, ID;
        cout << "\nEnter Book Name\n=> ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter Book ID\n=> ";
        cin >> ID;
        for (int i = 0; i < books.size(); i++)
        {
            if (books[i].title == name || books[i].ID == ID)
            {
                string answer;
                cout << "\nThis Book is Avalaible\n\n";
                cout << "Add to card?\n=> ";
                cin >> answer;
                for (int i = 0; i < answer.size(); i++)
                {
                    answer[i] = tolower(answer[i]);
                }
                if (answer == "yes") 
                { 
                    books[i].status = "Paid";
                    purchase.push_back({ books[i].title, books[i].ID, books[i].status, books[i].price });
                    books.erase(books.begin() + i);
                }
                return;
            }
        }
        cout << "This Book isn't Exist";
    }
    void borrow_book()
    {
        string name, ID;
        cout << "\nEnter Book Name\n=> ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter Book ID\n=> ";
        cin >> ID;
        for (int i = 0; i < books.size(); i++)
        {
            if (books[i].title == name || books[i].ID == ID)
            {
                string answer;
                cout << "\nThis Book is Avalaible\n\n";
                cout << "Add to card?\n=> ";
                cin >> answer;
                for (int i = 0; i < answer.size(); i++)
                {
                    answer[i] = tolower(answer[i]);
                }
                if (answer == "yes")
                {
                    books[i].status = "Borrowed";
                    purchase.push_back({ books[i].title, books[i].ID, books[i].status, books[i].price });
                    books.erase(books.begin() + i);
                }
                return;
            }
        }
        cout << "This Book isn't Exist";
    }
};