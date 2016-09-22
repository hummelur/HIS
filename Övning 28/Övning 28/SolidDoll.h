#ifndef INCLUDED_SOLIDDOLL
#define INCLUDED_SOLIDDOLL

#include "Doll.h"

class SolidDoll : public Doll {
public:
	SolidDoll(int weight);
	virtual ~SolidDoll();
	virtual int getWeight();
	void setWeight(int weight);
private:
	int mWeight;
};

#endif // !INCLUDED_SOLIDDOLL
