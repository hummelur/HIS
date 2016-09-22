#ifndef INCLUDED_ICECREAM
#define INCLUDED_ICECREAM

#include "Product.h"

class IceCream : public Product {
public :
	IceCream(int scoops);
	virtual int getPrice();
	int getScoopCount();
	void setScoopCount(int scoops);
private:
	int mScoops;
};
#endif // !INCLUDED_ICECREAM
