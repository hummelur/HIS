#include "SequentalDie.h"
#include <cstdlib>

using namespace std;

SequentalDie::SequentalDie() : mValue(1) {}

void SequentalDie::roll() {
	mValue++;
	if (6 < mValue) {
		mValue = 1;
	}
}

int SequentalDie::read() const {
	return mValue;
}

