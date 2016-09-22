#ifndef INCLUDED_DIE
#define INCLUDED_DIE

#include <cstdlib>

class Die {
public:
	virtual ~Die();
	virtual void roll() = 0;
	virtual int read() const = 0;
};
#endif // !INCLUDED_DIE
