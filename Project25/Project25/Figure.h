#ifndef INCLUDED_FIGURE
#define INCLUDED_FIGURE

class Figure {
public:
	Figure();
	virtual ~Figure();
	virtual void output() = 0;
};
#endif // !INCLUDED_FIGURE

