#ifndef INCLUDED_PRODUCT
#define INCLUDED_PRODUCT

#include <string>

class Product {
public:
	Product(std::string name);
	virtual ~Product();
	std::string getName();
	virtual int getPrice() = 0;
private:
	std::string mName;
};
#endif // !INCLUDED_PRODUCT
