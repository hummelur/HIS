#include "Tiger.h"
#include <iostream>

using namespace std;

Tiger::Tiger() : 
	Animal() {
}

Tiger::~Tiger() {
}

void Tiger::sound() const {
	cout << "Meeeoww!";
}
