#include "Candy.h"

using namespace std;

Candy::Candy(int weight) : 
	Product("Candy"),
	mWeight(weight){}

int Candy::getPrice() {
	return 8 * mWeight;
}

int Candy::getWeight() {
	return mWeight;
}

void Candy::setWeight(int weight) {
	mWeight = weight;
}