#include "Book.h"
#include <sstream>

Book::Book(const std::string& bookName, const std::string& authorName, const std::string& bookGander, int releaseDate, int bookCountPages,
	const std::string& timeReadingFrom, const std::string& timeReadingTo, const std::string& bookReviews, const std::string& notes)
	: bookName(bookName), authorName(authorName), bookGander(bookGander), releaseDate(releaseDate), bookCountPages(bookCountPages),
	timeReadingFrom(timeReadingFrom), timeReadingTo(timeReadingTo), bookReviews(bookReviews), notes(notes)
{
	// Tìlo konstruktoru mùže být prázdné
}

Book::~Book()
{
	// Tìlo destruktoru mùže být prázdné
}

std::string Book::getInfoString() const
{
	std::stringstream ss;
	ss << bookName << " by " << authorName << " (" << releaseDate << ")" << std::endl;
	return ss.str();
}