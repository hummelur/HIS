#include "Die.h"
#include "SequentalDie.h"
#include "OddDie.h"
#include "Mug.h"
#include <iostream>

using namespace std;
int main() {
	Mug mug;
	mug.add(new SequentalDie());
	mug.add(new OddDie(new SequentalDie()));
	cout << "Shaking: ";
	for (int i = 0; i < 10; i++) {
		cout << mug.read() << " ";
		mug.shake();
	}
	cout << endl;
	system("PAUSE");
	return 0;
}