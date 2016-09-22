#include "Integer.h"

Integer::Integer(int integer) : 
	Expression(),
	mInt(integer){
}

Integer::~Integer(){}

void Integer::setInt(int integer) {
	mInt = integer;
}
int Integer::evaluate() {
	return mInt;
}

int Integer::getInt() const {
	return mInt;
}