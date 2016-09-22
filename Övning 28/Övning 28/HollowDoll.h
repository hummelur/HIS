#ifndef INCLUDED_HOLLOWDOLL
#define INCLUDED_HOLLOWDOLL

#include "Doll.h"

class HollowDoll : public Doll {
public:
	HollowDoll(Doll *doll, int weight);
	virtual ~HollowDoll();
	virtual int getWeight();
	virtual void clear();
	void setWeight(int weight);
private:
	int mWeight;
	Doll* mDoll;
};
#endif // !INCLUDED_HOLLOWDOLL
