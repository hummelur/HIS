#include "Order.h"
#include <iostream>
using namespace std;

Order::Order() {
	mRows = {};
}

void Order::addRow(const Row &row) {
	mRows.push_back(row);
}

void Order::clear() {
	mRows.clear();
}

void Order::output() const {
	int orderTotal = 0;

	for (Rows::const_iterator i = mRows.begin(); i != mRows.end(); i++) {
		const Row &row = *i;
		const Product &product = row.getProduct();
		const int QUANTITY = row.getQuantity();
		const int PRICE = product.getPrice();
		const int ROW_TOTAL = QUANTITY * PRICE;
		orderTotal += ROW_TOTAL;

		cout << "Product: " << product.getName() << endl;
		cout << "Price: " << PRICE << endl;
		cout << "Quantity: " << QUANTITY << endl;
		cout << "Row total: " << ROW_TOTAL << endl << endl;
	}
	cout << "Total: " << orderTotal << endl;
}