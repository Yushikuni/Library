
#include "FileRepository.h"
#include <fstream>
#include <sstream>

std::vector<Book> FileRepository::loadBooks()
{
    std::vector<Book> books;
    std::ifstream in(fileName);

    if (!in.is_open()) return books;

    std::string line;
    while (std::getline(in, line)) 
    {
        std::stringstream ss(line);
        std::string title, author;
        int year;
        std::getline(ss, title, ';');
        std::getline(ss, author, ';');
        ss >> year;

        books.emplace_back(title, author, year);
    }
    return books;
}

void FileRepository::saveBooks(const std::vector<Book>& books)
{
    std::ofstream out(fileName);
    if (!out.is_open()) 
    {
        out << "File is damaged or deleted";
    }

    for (const auto& book : books)
    {
        out << book.getInfoString() << std::endl;
    }
}
