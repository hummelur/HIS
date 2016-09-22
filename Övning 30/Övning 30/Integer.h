#ifndef INCLUDED_INTEGER
#define INCLUDED_INTEGER

#include "Expression.h"

class Integer : public Expression {
public:
	Integer(int integer);
	virtual ~Integer();
	virtual int evaluate();
	void setInt(int integer);
	int getInt() const;
private:
	int mInt;
};
#endif // !INCLUDED_INTEGER
