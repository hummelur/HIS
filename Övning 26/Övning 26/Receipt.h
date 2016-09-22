#ifndef INCLUDED_RECEIPT
#define INCLUDED_RECEIPT

#include <vector>
#include "Product.h"

class Receipt {
public:
	Receipt();
	~Receipt();
	void add(Product *product);
	void print();
private:
	typedef std::vector<Product*> Products;
	Products mProducts;
};	
#endif // !INCLUDED_RECEIPT

