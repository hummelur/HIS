#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ifstream INPUT("Input.txt");
	while (!INPUT.eof()) {
		int input;
		INPUT >> input;
		for (int i = 0; i < input; i++)  
			cout << "*";

		cout << endl;
	}
	

	system("PAUSE");
	return 0;
}