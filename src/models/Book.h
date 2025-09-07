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
	Book(const std::string& bookName, const std::string& authorName, const std::string& bookGander, int releaseDate, int bookCountPages,
		const std::string& timeReadingFrom = "", const std::string& timeReadingTo = "", const std::string& bookReviews = "", const std::string& notes = "");

	~Book();
	std::string getInfoString() const;
};