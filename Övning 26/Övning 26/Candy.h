#ifndef INCLUDED_CANDY
#define INCLUDED_CANDY

#include "Product.h"

class Candy : public Product {
public:
	Candy(int weight);
	virtual int getPrice();
	int getWeight();
	void setWeight(int weight);
private:
	int mWeight;

};
#endif // !INCLUDED_CANDY
