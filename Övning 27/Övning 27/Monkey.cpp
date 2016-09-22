#include "Monkey.h"
#include <iostream>
using namespace std;

Monkey::Monkey() :
	Animal() {
}

Monkey::~Monkey() {
}

void Monkey::sound() const {
	cout << "Awooodhh";
}