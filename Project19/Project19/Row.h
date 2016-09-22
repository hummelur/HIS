#ifndef INCLUDED_ROW
#define INCLUDED_ROW

#include "Product.h"

class Row {
public:
	Row(const Product &product, int quantity);
	void setProduct(const Product &product);
	void setQuantity(int quantity);
	const Product& getProduct() const;
	int getQuantity() const;
private:
	Product mProduct;
	int mQuantity;
};
#endif // !INCLUDED_ROW

