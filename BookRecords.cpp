
#include <iostream>
#include <fstream>
#include <string>

#include "BookRecords.h"

//inicialization of book record
void BookRecords::BookRecord() {}

// Add new Book Record
void BookRecords::AddNewBookRecord()
{
    std::fstream BookFile("BookSheet.txt");
    std::cout << "Adding a new Book recod:\n";
    std::string BookAuthor;
    std::string BookName = "Unknow";
    std::string BookGender = "Unknow";
    std::string PageCount;
    std::string BookAbout = "Unknow";
    bool isBorrowed = false;
    // Author(s); Publisher; Gender; Page Count (1200 pages); About book;
    std::cout << "Write name of Autor(s):\n";
    std::cin.ignore();
    std::getline(std::cin, BookAuthor, '\n');

    std::cout << "Write name of Book:\n";
    std::getline(std::cin, BookName, '\n');
    
    std::cout << "Write Book gender:\n";
    std::getline(std::cin, BookGender, '\n');
    
    std::cout << "Write count pages of the book:\n";
    std::getline(std::cin, PageCount, '\n');
    
    std::cout << "Write some interesting about this book:\n";
    std::getline(std::cin, BookAbout, '\n');
    
    BookFile << BookAuthor << ";" << BookName << ";" << BookGender << ";" << PageCount << ";" << BookAbout << ";\n";

    std::cout << "New Book has been added!\n";
    BookFile.close();
    
    
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
    
    std::string string;
    std::ifstream BookSheet;
    
    BookSheet.open("BookSheet.txt");
    if (BookSheet.is_open())
    {
        std::string TipeLine;
        while (std::getline(BookSheet, TipeLine))
        {
            std::cout << TipeLine << " ";
        }
    }
    
    BookSheet.close();
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