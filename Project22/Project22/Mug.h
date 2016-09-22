#ifndef INCLUDED_MUG
#define INCLUDED_MUG
#include "Die.h"
#include <vector>
class Mug {
public:
	Mug();
	~Mug();
	void add(Die *die);
	void clear();
	void shake();
	int read() const;
private:
	void internalClear();
	typedef std::vector<Die*> DieVector;
	DieVector mDice;
};
#endif