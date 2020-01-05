//============================================================================
// Name        : T1Q8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	cout << "there are " << argc << " Arguments" << endl;

int count[] = {0,0,0,0,0,0,0,0,0,0,0};
	for (int i=1; i<argc; i++){
		string str = argv[i];
		int x = str.length();
		for (int j=1; j<10;j++){
			if (x == j){
				count[j]++;
			}
		}
	}
	for (int k=1;k<10;k++){
		cout << "Length " << k << " has " << count[k] << " characters" << endl;
	}

	return 0;
}
