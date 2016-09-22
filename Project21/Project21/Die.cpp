#include "Die.h"

using namespace std;

static int randomValue(int max) {
	return rand() % max + 1;
}

Die::Die(int max) :
	mValue(randomValue(max)),
	mMax(max) {
}

void Die::roll() {
	mValue = randomValue(mMax);
}

int Die::read() const {
	return mValue;
}