#include <iostream>
#include "Addition.h"
#include "Integer.h"

using namespace std;

int main() {

	Expression *e0 = new Addition(new Integer(1), new Integer(2));
	Expression *e1 = new Addition(new Integer(3), new Integer(4));
	Addition a(e0, e1);
	cout << e0->evaluate() << endl;
	cout << e1->evaluate() << endl;
	cout << a.evaluate() << endl;
	a.setLeft(new Integer(100));
	a.setRight(new Integer(200));
	cout << a.evaluate() << endl;

	system("PAUSE");
	return 0;
}