#include "IceCream.h"

using namespace std;

IceCream::IceCream(int scoops): 
	Product("IceCream"),
	mScoops(scoops){
}

int IceCream::getPrice() {
	return 10 + (5 * mScoops);
}

int IceCream::getScoopCount() {
	return mScoops;
}

void IceCream::setScoopCount(int scoops) {
	mScoops = scoops;
}