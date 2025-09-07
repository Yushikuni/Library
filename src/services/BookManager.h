// BookManager.h
#pragma once
#include "models/Book.h"
#include "repository/IRepository.h"
#include <vector>

// ...

class BookManager {
private:
    std::vector<Book> books;
    IRepository* repository;
public:
    BookManager(IRepository* repo) : repository(repo), books(repository->loadBooks()) {}

    void addBook(const Book& book);

    const std::vector<Book>& getBooks() const;

    void save();
};