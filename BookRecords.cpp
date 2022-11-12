
#include <iostream>
#include <fstream>
#include <string>

#include "BookRecords.h"

//inicialization of book record
void BookRecords::BookRecord() {}

// Add new Book Record
void BookRecords::AddNewBookRecord()
{
    std::ofstream BookFile;
    BookFile.open("BookSheet.txt", std::ios::app);
    std::cout << "Adding a new Book recod:\n";
    std::string BookAuthor;
    std::string BookName = "Unknow";
    std::string BookGender = "Unknow";
    std::string PageCount;
    std::string BookAbout = "Unknow";
    std::string IdentifyNumber = "-1";
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

    std::cout << "Write Identify Number of the book:\n";
    std::getline(std::cin, IdentifyNumber, '\n');
    
    BookFile << IdentifyNumber << ";" << BookAuthor << ";" << BookName << ";" << BookGender << ";" << PageCount << ";" << BookAbout << ";\n";

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
    std::string DeleteBookLine;
    std::string BookLine;
    std::ifstream BookSheet;// ("BookSheet.txt");   //otevøít textový soubor s daty
    std::ofstream Temp;// ("temp.txt");             //vytvoøit doèasný texák jako kopii souboru s provedenými zmìnami
                                                //vymazat doèasný textový soubor 

    BookSheet.open("BookSheet.txt");
    Temp.open("temp.txt");

    std::cout << "Input Identify nuber of the book for deleting: ";
    std::cin >> DeleteBookLine;

    while (getline(BookSheet,BookLine))
    {
        std::string id(BookLine.begin(), BookLine.begin() + BookLine.find(" "));
        if (id != DeleteBookLine)
        {
            Temp << BookLine << std::endl;
        }
    }
    Temp.close();
    BookSheet.close();
    remove("BookSheet.txt");
    rename("temp.txt", "BookSheet.txt");
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
            std::cout << TipeLine << "\n";
        }
    }

    BookSheet.close();
}

// Is User Logged?
bool BookRecords::UserIsLogged(bool OutUserIsLoged) const
{
    return OutUserIsLoged;
}