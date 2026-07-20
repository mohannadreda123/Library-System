#pragma once
#include<iostream>
#include<vector>
#include<string>
#include "library.cpp"
using namespace std;
class Transaction
{
public:
    int select_book(Library &l) const
    {
        string name, ID;
        cout << "\nEnter Book Name\n=> ";
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, name);
        cout << "\nEnter Book ID\n=> ";
        cin >> ID;
        for (int i = 0; i < l.get_books().size(); i++)
        {
            if (l.get_books()[i].title == name || l.get_books()[i].ID == ID)
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
                    return i;
                }
                else
                {
                    break;
                }
            }
        }
        cout << "This Book isn't Exist";
        return -1;
    }
};