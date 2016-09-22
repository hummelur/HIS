#include <iostream>
#include "Receipt.h"
#include "Candy.h"
#include "IceCream.h"

using namespace std;

int main() {
	
	Product *p0 = new Candy(5); //Ett hekto godis
	Product *p1 = new Candy(3); //Tre hekto godis
	Product *p2 = new IceCream(1); //Glass med en glasskula
	Product *p3 = new IceCream(4); //Glass med fyra glasskulor

	Receipt receipt;
	receipt.add(p0);
	receipt.add(p1);
	receipt.add(p2);
	receipt.add(p3);
	receipt.print();

	system("PAUSE");
	return 0;
}