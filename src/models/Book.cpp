#include "Book.h"
#include <iostream>

Book::Book(const std::string& bookName, const std::string& authorName, int releaseDate) :bookName(bookName), authorName(authorName), releaseDate(releaseDate){}

Book::~Book(){}

void Book::printRecord()
{
	std::cout << bookName << " by " << authorName << " (" << releaseDate << ")" << std::endl;
}
/*
	std::string bookName;
	std::string authorName;
	std::string bookGander;
	int releaseDate;
	int bookCountPages;
	std::string timeReadingFrom;
	std::string timeReadingTo;
	std::string bookReviews;
	std::string notes;
*/