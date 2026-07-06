#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>
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
            case 1: manager.buy_book(); break;
            case 2: manager.borrow_book(); break;
            case 3: manager.view_existed_Books(); break;
            case 4: manager.view_card(); break;
            }
        } while (ui.again());
    }
    ui.buy();
    return 0;
}