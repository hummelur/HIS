#include "Zoo.h"
#include <iostream>
using namespace std;

Zoo::Zoo() {
}

Zoo::~Zoo() {
	while (!mAnimals.empty()) {
		delete mAnimals.back();
		mAnimals.pop_back();
	}
}
void Zoo::add(Animal *animal) {
	mAnimals.push_back(animal);
}

void Zoo::sound() const {
	for (Animals::size_type i = 0; i != mAnimals.size(); i++) {
		mAnimals[i]->sound(); cout << endl;
	}
}