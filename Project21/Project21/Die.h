#ifndef INCLUDED_DIE
#define INCLUDED_DIE

#include <cstdlib>

class Die {
public:
	Die(int max = 6);
	void roll();
	int read() const;
private:
	int mValue;
	int mMax;
};
#endif // !INCLUDED_DIE
