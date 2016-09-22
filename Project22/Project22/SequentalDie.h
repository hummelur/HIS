#ifndef INCLUDED_SEQUENTALDIE
#define INCLUDED_SEQUENTALDIE

#include "Die.h"

class SequentalDie : public Die {
public:
	SequentalDie();
	virtual void roll();
	virtual int read() const;
private:
	int mValue;
};
#endif // !INCLUDED_SEQUENTALDIE
