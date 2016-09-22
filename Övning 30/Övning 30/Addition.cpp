#include "Addition.h"

using namespace std;

Addition::Addition(Expression *left, Expression *right) :
	Expression(),
	mLeft(left),
	mRight(right) {
}

Addition::~Addition() {
	delete mLeft;
	delete mRight;
}

int Addition::evaluate() {
	return mLeft->evaluate() + mRight->evaluate();
}

Expression* Addition::getLeft() {
	return mLeft;
}

Expression* Addition::getRight() {
	return mRight;
}

void Addition::setLeft(Expression *left) {
	if (mLeft != left) {
		delete mLeft;
		mLeft = left;
	}
}
void Addition::setRight(Expression *right) {
	if (mRight != right) {
		mRight = right;
	}
}