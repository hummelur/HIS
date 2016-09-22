#include "Product.h"

using namespace std;

Product::Product(string name) :
	mName(name) {
}

Product::~Product() {
}

string Product::getName() {
	return mName;
}
