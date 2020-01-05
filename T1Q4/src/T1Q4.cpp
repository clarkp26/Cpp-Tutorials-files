//============================================================================
// Name        : T1Q4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void Square(int *p){
	//int x ;
	int x = *p;
	int y = x*x;
	cout << x << " Squared = " << y << endl;
}

int main() {
	int x = 9;
	int *pointer;
	pointer = &x;
	cout << pointer<< endl;

	Square(pointer);
	return 0;
}

