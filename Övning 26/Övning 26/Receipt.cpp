#include "Receipt.h"
#include <iostream>

using namespace std;

Receipt::Receipt() {
}

Receipt::~Receipt() {
	while (!mProducts.empty()) {
		delete mProducts.back();
		mProducts.pop_back();
	}
}

void Receipt::add(Product *product) {
	mProducts.push_back(product);
}

void Receipt::print() {
	for (Products::size_type i = 0; i != mProducts.size(); i++) {
		cout << mProducts[i]->getName() << " " << mProducts[i]->getPrice() << "kr" << endl;
	}
}