#ifndef INCLUDED_COMPOSITE
#define INCLUDED_COMPOSITE

#include "Figure.h"
#include <vector>

class Composite : public Figure {
public:
	Composite();
	virtual ~Composite();
	virtual void output();
	void add(Figure *figure);
	void clear();
private:
	typedef std::vector<Figure*> FigureVector;
	FigureVector mFigures;
};
#endif // !INCLUDED_COMPOSITE

