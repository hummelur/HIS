#ifndef INCLUDED_ORDER
#define INCLUDED_ORDER

#include "Row.h"
#include <vector>

class Order {
public:
	Order();
	void addRow(const Row &row);
	void clear();
	void output() const;private:
	typedef std::vector<Row> Rows;
	Rows mRows;
};
#endif // !INCLUDED_ORDER
