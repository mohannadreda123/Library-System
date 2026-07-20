#pragma once
#include<iostream>
#include "transaction.cpp"
#include "card.cpp"
#include "buy.cpp"
#include "borrow.cpp"
#include"admin.cpp"
#include"user.cpp"
#include"person.cpp"
#include"library.cpp"
#include"UI.cpp"
using namespace std;
int main()
{
    Person* person;
    Library manager;
    Transaction trans;
    Card card;
    Buy buy;
    Borrow borrow;
    UI ui;
    if (ui.Intro() == 1)
    {
        person = new Admin;
        person->set_Info();
        do
        {
            switch (ui.Admin_Choice())
            {
            case 1: manager.Add_books(); break;
            case 2: manager.Delete_books(); break;
            case 3: manager.view_existed_Books(); break;
            }
        } while (ui.again());
    }
    else
    {
        person = new User;
        person->set_Info();
        do
        {
            switch (ui.User_Choice())
            {
            case 1: buy.buy_book(trans, manager); break;
            case 2: borrow.borrow_book(trans, manager); break;
            case 3: manager.view_existed_Books(); break;
            case 4: card.view_card(manager); break;
            }
        } while (ui.again());
    }
    ui.buy();
    delete person;
    return 0;
}