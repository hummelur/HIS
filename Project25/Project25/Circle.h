#ifndef INCLUDED_CIRCLE
#define INCLUDED_CIRCLE

#include "Figure.h"

class Circle : public Figure {
public:
	Circle(int radius);
	virtual ~Circle();
	virtual void output();
	void setRadius(int radius);
	int getRadius() const;
private:
	int mRadius;
};
#endif // !INCLUDED_CIRCLE
