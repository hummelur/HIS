#include "Die.h"
#include "DiePair.h"
#include <iostream>

using namespace std;

int main() {
	Die die0(8);
	Die die1(8);
	DiePair diePair(die0, die1);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << diePair.read() << " ";
			diePair.roll();
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}