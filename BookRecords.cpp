
#include <iostream>

#include "BookRecords.h"

//inicialization of book record
void BookRecords::BookRecord()
{

}

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
