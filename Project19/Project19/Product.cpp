#include "Product.h"

using namespace std;

Product::Product(const std::string &name, int price) :
	mName(name),
	mPrice(price) {
}

void Product::setName(const std::string &name) {
	mName = name;
}

void Product::setPrice(int price) {
	mPrice = price;
}

const std::string Product::getName() const {
	return mName;
}

int Product::getPrice() const {
	return mPrice;
}