#ifndef INCLUDED_ANIMAL
#define INCLUDED_ANIMAL

#include <string>

class Animal {
public:
	Animal();
	virtual ~Animal();
	virtual void sound() const = 0;

};
#endif // !INCLUDED_ANIMAL
