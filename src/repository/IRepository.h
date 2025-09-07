#pragma once
#include "../../src/models/Book.h"
#include <vector>

class IRepository
{
public:
	IRepository() = default;
	virtual ~ IRepository() = default;

	virtual std::vector<Book> loadBooks() = 0;
	virtual void saveBooks(const std::vector<Book>& books) = 0;
};