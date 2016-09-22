#include "DiePair.h"

using namespace std;

DiePair::DiePair(Die die0, Die die1) : 
	mDie0(die0),
	mDie1(die1){
}

void DiePair::roll() {
	mDie0.roll();
	mDie1.roll();
}

int DiePair::read() const {
	if (mDie0.read() < mDie1.read()) {
		return mDie1.read();
	} else {
		return mDie0.read();
	}
}
