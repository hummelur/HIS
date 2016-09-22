#ifndef INCLUDED_EXPRESSION
#define INCLUDED_EXPRESSION

class Expression {
public:
	Expression();
	virtual ~Expression();
	virtual int evaluate() = 0;
};
#endif // !INCLUDED_EXPRESSION
