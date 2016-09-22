#ifndef INCLUDED_DOLL
#define INCLUDED_DOLL

class Doll {
public:
	Doll();
	virtual ~Doll();
	virtual void clear() = 0;
	virtual int getWeight() = 0;
};
#endif // !INCLUDED_DOLL
