#include "Product.h"
#include "stdafx.h"
#include <string>

using namespace std;

Product::Product(const std::string &name, int price) :
	mName(name),
	mPrice(price) {
}

void Product::setName(const string &name) {
	mName = name;
}
void Product::setPrice(int price) {
	mPrice = price;
}
const string& Product::getName() const {
	return mName;
}
int Product::getPrice() const {
	return mPrice;
}