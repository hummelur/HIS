#ifndef INCLUDED_PRODUCT
#define INCLUDED_PRODUCT
#include <string>
class Product {
public:
	Product(const std::string &name, int price);
	void setName(const std::string &name);
	void setPrice(int price);
	const std::string& getName() const;
	int getPrice() const;
private:
	std::string mName;
	int mPrice;
};
#endif // !INCLUDED_PRODUCT

