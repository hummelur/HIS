#include "Product.h"
#include "Order.h"
#include "Row.h"
#include <iostream>

using namespace std;

int main() {
	Order order;
	order.addRow(Row(Product("MP3", 200), 3));
	order.addRow(Row(Product("MP4", 400), 4));
	order.addRow(Row(Product("MP5", 600), 2));
	order.output();
	system("PAUSE");
	return 0;
}