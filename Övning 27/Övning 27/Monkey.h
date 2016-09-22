#ifndef INCLUDED_MONKEY
#define INCLUDED_MONKEY

#include "Animal.h"

class Monkey : public Animal {
public:
	Monkey();
	virtual ~Monkey();
	virtual void sound() const;
};
#endif // !INCLUDED_MONKEY
