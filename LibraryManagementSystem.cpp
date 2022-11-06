#include <iostream>
#include "BookRecords.h"
#include "LibraryManagementSystem.h"

int main()
{
    std::cout << "Welcome in Labrary Management System!\nPlease log in:";
    int MenuOption;
    BookRecords BR = BookRecords();
    BR.BookRecord();
    // Adding Login Information

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
    default:
        Menu(MenuOption);
        break;
    }
    // End Main Program Loop
    std::cin.get();
    std::cin.get();

    return 0;
}

// Just menu Function
void Menu(int& MenuOption)
{
    std::cout << "What do you wanna do?\n";
    std::cout << "1. Add New Book Record\n";
    std::cout << "2. Update Existing Book Record\n";
    std::cout << "3. Delete Existing Book Record\n";
    std::cout << "4. Print All Existing Records\n";
    std::cin >> MenuOption;
}
/*      TODO     */
//1. New Header and Cpp files for
// Add New Book Record
// Update existing record
// Print All records
// Login information
// Show All User record READ ONLY
// Make it read and write to file(s)
//2. Test it for all!!
//3. Add this to portfolio!!