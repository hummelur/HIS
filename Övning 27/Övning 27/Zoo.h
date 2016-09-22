#ifndef INCLUDED_ZOO
#define INCLUDED_ZOO

#include "Animal.h"
#include <vector>

class Zoo {
public:
	Zoo();
	~Zoo();
	void add(Animal *animal);
	void sound() const;
private:
	typedef std::vector<Animal*> Animals;
	Animals mAnimals;
};
#endif // !INCLUDED_ZOO
