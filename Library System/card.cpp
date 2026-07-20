#pragma once
#include<iostream>
#include<vector>
#include<string>
#include "library.cpp"
using namespace std;
class Card
{
public:
    void view_card(Library &l)
    {
        system("cls");
        if (l.get_purchase().empty())
        {
            cout << "The card is Empty";
        }
        else
        {
            cout << "Title:\t\t\t\t\tID:\t\t\t\tStatus:\t\t\t\tPrice:\n\n";
            for (int i = 0; i < l.get_purchase().size(); i++)
            {
                cout << l.get_purchase()[i].title;
                if (l.get_purchase()[i].title.size() < 30)
                {
                    for (int j = l.get_purchase()[i].title.size(); j <= 30; j++)
                    {
                        cout << " ";
                    }
                }
                cout << "\t\t" << l.get_purchase()[i].ID;
                cout << "\t\t\t" << l.get_purchase()[i].status;
                if (l.get_purchase()[i].status.size() < 10)
                {
                    for (int j = l.get_purchase()[i].status.size(); j <= 30; j++)
                    {
                        cout << " ";
                    }
                }
                cout << "\t" << l.get_purchase()[i].price << "$\n\n";
            }
        }
    }
};