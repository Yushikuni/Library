
#include <iostream>
#include "BookRecords.h"

//inicialization of book record
void BookRecords::BookRecord(){}

// Add new Book Record
void BookRecords::AddNewBookRecord()
{

    std::cout << "Adding a new Book recod:\n";
    std::string BookAuthor;
    std::string BookName = "Unknow";
    std::string BookGender = "Unknow";
    int PageCount = -1;
    std::string BookAbout = "Unknow";
    // Author(s); Publisher; Gender; Page Count (1200 pages); About book;
    std::cout << "Write name of Autor(s):\n";
    std::cin >> BookAuthor;
    std::cout << "Write name of Book:\n";
    std::cin >> BookName;
    std::cout << "Write Book gender:\n";
    std::cin >> BookGender;
    std::cout << "Write count pages of the book:\n";
    std::cin >> PageCount;
    std::cout << "Write some interesting about this book:\n";
    std::cin >> BookAbout;

    std::cout << "New Book has been added!\n";
}

// Update existing book record
void BookRecords::UpdateBookRecord()
{
    std::cout << "Book has been updated!\n";
}

// Delete Book report
void BookRecords::DeleteBookRecord()
{
    std::cout << "Book was deleted!!\n";
}

// Is book borrowed at this time?
bool BookRecords::OnBorrowedTime()
{
    std::cout << "Book is borowed\n";
    return true;
}

// If user is not logged, print all book record
void BookRecords::PrintAllRecord()
{
    std::cout << "Printing All records!!!\n";
}

// Prining after user is logged
void BookRecords::PrintUserRecord()
{
    std::cout << "!!!Printing User Record!!!!!\n";
}


// Is User Logged?
bool BookRecords::UserIsLogged(bool OutUserIsLoged) const
{
    return OutUserIsLoged;
}

// Print All user information such as a Username, Book borrowed history
void BookRecords::PrintUserInformations()
{

}