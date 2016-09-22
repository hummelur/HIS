#ifndef INCLUDED_ADDITION
#define INCLUDED_ADDITION

#include "Expression.h"

class Addition : public Expression {
public:
	Addition(Expression *left, Expression *right);
	virtual ~Addition();
	virtual int evaluate();
	Expression* getLeft();
	Expression* getRight();
	void setLeft(Expression *left);
	void setRight(Expression *right);
private:
	Expression *mLeft;
	Expression *mRight;

};
#endif // !INCLUDED_ADDITION
