#include "Input.h"

using namespace std;

Input::Input() : mInt(){}

int Input::calcInput(int iput1, int iput2) const {
	return iput1 + iput2;
}

void Input::setInput(int input) {
	mInt.push_back(input);
}

void Input::scanInput(string inputstr1, string inputstr2) {
	//tar ifstream för att kunna läsa av textfilerna
	ifstream input1(inputstr1);
	ifstream input2(inputstr2);

	for (int i = 0; !input1.eof(); i++) {
		for (int j = 0; !input2.eof(); j++) {
			int iput1 = 0;
			int iput2 = 0;
			input1 >> iput1;
			input2 >> iput2;
			setInput(calcInput(iput1, iput2));
		}
	}
}

void Input::output() {
	for (vInt::size_type i = 0; i < mInt.size(); i++) {
		cout << mInt[i] << endl;
	}
}