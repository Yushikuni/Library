#pragma once
#include <string>

class Book
{
private:
	std::string bookName;
	std::string authorName;
	std::string bookGander;
	int releaseDate;
	int bookCountPages;
	std::string timeReadingFrom;
	std::string timeReadingTo;
	std::string bookReviews;
	std::string notes;

public:
	Book(const std::string& bookName, const std::string& authorName, int releaseDate);
	~Book();

	void printRecord();

};