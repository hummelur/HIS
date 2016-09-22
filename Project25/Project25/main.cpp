#include "Circle.h"
#include "Composite.h"
#include <iostream>

using namespace std;

int main() {
	Composite *composite0 = new Composite;
	composite0->add(new Circle(1));
	composite0->add(new Circle(9));
	Composite composite;
	composite.add(composite0);
	composite.add(new Circle(3));
	composite.output(); cout << endl;
	composite.clear();
	composite.output(); cout << endl;
	system("PAUSE");
	return 0;
}