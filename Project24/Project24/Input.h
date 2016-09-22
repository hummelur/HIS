#ifndef INCLUDED_INPUT
#define INCLUDED_INPUT

#include <fstream>
#include <iostream>
#include <vector>

class Input {
public:
	Input();
	void scanInput(std::string, std::string);
	void output();
private:
	int calcInput(int, int) const;
	void setInput(int);
	typedef std::vector<int> vInt;
	vInt mInt;

};
#endif // !INCLUDED_INPUT