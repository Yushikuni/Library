#include <iostream>

#include "BookRecords.h"
//#include "LibrarySystem.h"

int main()
{
    std::cout << "Welcome in Labrary Management System!\nPlease log in:\n";
    int MenuOption, i = 0;
    BookRecords BR = BookRecords();
    BR.BookRecord();

    // Adding Login Information
    std::string UsernameSystem = "Vashni";   
    std::string PasswordSystem = "TSym5nlf982eWNV";

    std::string Username, Password;
    std::cout << "Username: \n";
    std::cin >> Username;
    std::cout << "Password: \n";
    std::cin >> Password;
    bool UserIsLogged = BR.UserIsLogged(Username == UsernameSystem && Password == PasswordSystem);

    while (!BR.UserIsLogged(UserIsLogged)) 
    {
        std::cout << "Invalid login\nPlease log in:\n";
        std::cout << "Username: \n";
        std::cin >> Username;
        std::cout << "Password: \n";
        std::cin >> Password;

        ++i;
        if (i == 5)
        {
            std::cout << "Too many unsuccessful attempts have been made. The application is terminating";
            return 5;
        }
    };
    
    while (UserIsLogged)
    {
        std::cout << "User sucessfully loged into system!!!!" << std::endl;
        // Begin Main Program Loop

        Menu(MenuOption);
       
        switch (MenuOption)
        {
        case 1:
            BR.AddNewBookRecord();
            break;
        case 2:
            BR.UpdateBookRecord();
            break;
        case 3:
            BR.DeleteBookRecord();
            break;
        case 4:
            BR.PrintAllRecord();
            break;
        case 5:
            BR.LogOutMessage(UserIsLogged = false);
            break;
        case 6:
            BR.LogOutMessage(UserIsLogged = false);
            break;
        default:
            return 6;

        }
        // End Main Program Loop
    }

    std::cin.get();

    return 0;
}

// Menu Function
void Menu(int& MenuOption)
{
    std::cout << "What do you wanna do?\n";
    std::cout << "1. Add New Book Record\n";
    std::cout << "2. Update Existing Book Record\n";
    std::cout << "3. Delete Existing Book Record\n";
    std::cout << "4. Print All Existing Records\n";
    std::cout << "5. Log out\n";
    std::cout << "6. Exit Application\n";
    std::cin >> MenuOption;
}