#include <iostream>
#include "UI.h"
#include "library.h"
using namespace std;
int main()
{
    string choice;
    Library system;
    do {
        choice = UI::start();
        string input;
        if (choice == "1") {
            do {
                input = UI::book();
                if (input == "1") { system.addBook(); }
                else if (input == "2") { system.viewBooks(); }
                else if (input == "3") { system.sortBooks(); }
                else if (input == "4") { system.searchBook(); }
                else if (input == "5") { system.deleteBook(); }
                else if (input != "0") cout << "*{ Invalid Choice! }*\n\n";
            } while (input != "0");
        }
        else if (choice == "2") {
            do {
                input = UI::member();
                if (input == "1") { system.addMember(); }
                else if (input == "2") { system.viewMembers(); }
                //else if (input == "3") { system.sortMembers(); }
                //else if (input == "4") { system.searchMember(); }
                //else if (input == "5") { system.viewMemberHistory(); }
                else if (input == "6") { system.deleteMember(); }
                else if (input != "0") cout << "*{ Invalid Choice! }*\n\n";
            } while (input != "0");   
        }
        else if (choice != "0") cout << "*{ Invalid Choice! }*\n\n";
    } while (choice != "0");
    return 0;
}