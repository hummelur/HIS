#include <iostream>
#include "Monkey.h"
#include "Tiger.h"
#include "Zoo.h"

using namespace std;

int main() {
	Animal *a1 = new Monkey();
	Animal *a2 = new Tiger();
	Animal *a3 = new Monkey();
	Animal *a4 = new Tiger();
	a1->sound(); cout << endl;
	a2->sound(); cout << endl;

	Zoo zoo;
	zoo.add(a1);
	zoo.add(a2);
	zoo.add(a3);
	zoo.add(a4);
	zoo.sound();

	system("PAUSE");
	return 0;
}