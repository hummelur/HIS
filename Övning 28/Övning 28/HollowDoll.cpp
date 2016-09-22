#include "HollowDoll.h"

using namespace std;

HollowDoll::HollowDoll(Doll *doll, int weight) :
	Doll(),
	mDoll(doll),
	mWeight(weight) {
}

HollowDoll::~HollowDoll() {

}

int HollowDoll::getWeight() {
	return mDoll->getWeight() + mWeight;
}

void HollowDoll::setWeight(int weight) {
	mWeight = weight;
}
