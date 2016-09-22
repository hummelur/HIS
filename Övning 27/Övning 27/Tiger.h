#ifndef INCLUDED_TIGER
#define INCLUDED_TIGER

#include "Animal.h"

class Tiger : public Animal {
public:
	Tiger();
	virtual ~Tiger();
	virtual void sound() const;
};
#endif // !INCLUDED_TIGER
