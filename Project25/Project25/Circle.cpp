#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(int radius) : 
	Figure(),	
	mRadius(radius){
}

Circle::~Circle() {

}

void Circle::output(){
	cout << "circle(" << mRadius << ")";
}

void Circle::setRadius(int radius) {
	mRadius = radius;
}

int Circle::getRadius() const {
	return mRadius;
}