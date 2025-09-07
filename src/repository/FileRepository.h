#include "IRepository.h"
#include <string.h>

class FileRepository : public IRepository
{
private:
	std::string fileName;
public:
	FileRepository(const std::string& file) : fileName(file) {};

	std::vector<Book> loadBooks() override;
	void saveBooks(const std::vector<Book>& books) override;
};