#include "Composite.h"
#include <iostream>

using namespace std;

Composite::Composite() : 
	Figure(),
	mFigures(){
}

Composite::~Composite() {
	while (!mFigures.empty()) {
		delete mFigures.back();
		mFigures.pop_back();
	}
}

void Composite::output() {
	cout << "composite(";
	for (FigureVector::size_type i = 0; i != mFigures.size(); i++) {
		mFigures[i]->output();
	}
	cout << ")";
}

void Composite::add(Figure* figure) {
	mFigures.push_back(figure);
}

void Composite::clear() {
	while (!mFigures.empty()) {
		delete mFigures.back();
		mFigures.pop_back();
	}
}
