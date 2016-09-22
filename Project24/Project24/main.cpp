#include "Input.h"
#include <iostream>

using namespace std;

int main() {

	Input iput;
	iput.scanInput("Input0.txt", "Input1.txt");
	iput.output();

	system("PAUSE");
	return 0;
}