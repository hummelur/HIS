#ifndef INCLUDED_DIEPAIR
#define INCLUDED_DIEPAIR

#include "Die.h"

class DiePair {
public:
	DiePair(Die die0 = Die(), Die die1 = Die());
	void roll();
	int read() const;
private:
	Die mDie0;
	Die mDie1;
};
#endif // !INCLUDED_DIEPAIR
