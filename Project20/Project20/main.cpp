#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool hasa(string s) {
	for (string::size_type i = 0; i < s.length(); i++) {
		if (s[i] == 'a') {
			return true;
		}
	}
	return false;
}

int main() {
	ifstream input("input.txt");

	while (!input.eof()) {
		string wish;
		input >> wish;
		if (hasa(wish)) {
			cout << wish << endl;
		}
	}

	system("PAUSE");
	return 0;
}