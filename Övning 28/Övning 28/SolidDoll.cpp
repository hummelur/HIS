#include "SolidDoll.h"

using namespace std;

SolidDoll::SolidDoll(int weight) :
	Doll(),
	mWeight(weight) {
}

SolidDoll::~SolidDoll() {

}

int SolidDoll::getWeight() {
	return mWeight;
}
void SolidDoll::clear() {

}

void SolidDoll::setWeight(int weight) {
	mWeight = weight;
}