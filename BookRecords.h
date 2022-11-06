#pragma once

class BookRecords
{
public:
    // Inicalization
    void BookRecord();
    // Read and Update Records on screen and file(s)
    void AddNewBookRecord();
    void UpdateBookRecord();
    void DeleteBookRecord();    

    // Print record form file
    void PrintAllRecord();

    // Print record from file
    bool UserIsLogged();
    bool OnBorrowedTime();
    void PrintUserRecord();
    void PrintUserInformations();
};

