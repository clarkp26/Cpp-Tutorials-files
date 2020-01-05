//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	cout << "there are " << argc << " Arguments" << endl;
	cout << "the first argument is " << argv[0] << endl;

	for (int i=1; i<argc; i++){
		cout<< argv[argc-i] << " ";
	}

	return 0;
}
