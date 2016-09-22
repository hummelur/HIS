#include "HollowDoll.h"

using namespace std;

HollowDoll::HollowDoll(Doll *doll, int weight) :
	mDoll(doll),
	mWeight(weight) {
}

HollowDoll::~HollowDoll() {
	delete mDoll;
}

int HollowDoll::getWeight() {
	int weight = mWeight;
	if (mDoll != 0) {
		weight += mDoll->getWeight();
	}
	return weight;
}

void HollowDoll::clear() {
	delete mDoll;
	mDoll = 0;
}

void HollowDoll::setWeight(int weight) {
	mWeight = weight;
}
