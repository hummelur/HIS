#include "Row.h"

Row::Row(const Product &product, int quantity) :
	mProduct(product),
	mQuantity(quantity) {
}
void Row::setProduct(const Product &product) {
	mProduct = product;
}
void Row::setQuantity(int quantity) {
	mQuantity = quantity;
}
const Product& Row::getProduct() const {
	return mProduct;
}

int Row::getQuantity() const {
	return mQuantity;
}