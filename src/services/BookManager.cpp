#include "BookManager.h"

void BookManager::addBook(const Book& book)
{
	books.push_back(book);
}

const std::vector<Book>& BookManager::getBooks() const
{
	return books;
}

void BookManager::save()
{
    repository->saveBooks(books);
}
