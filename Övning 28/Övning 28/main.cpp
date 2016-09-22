#include <iostream>
#include "HollowDoll.h"
#include "SolidDoll.h"

using namespace std;

int main() {

	Doll *d1 = new SolidDoll(1);
	Doll *d2 = new HollowDoll(d1, 2);
	Doll *d3 = new HollowDoll(d2, 3);
	cout << d1->getWeight() << endl;
	cout << d2->getWeight() << endl;
	cout << d3->getWeight() << endl;
	d2->clear();
	cout << d2->getWeight() << endl;
	delete d1;
	system("PAUSE");
	return 0;
}