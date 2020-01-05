//============================================================================
// Name        : T2Q1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void square(int *p){
	int x = *p;
	cout << x*x << endl;
}
int main() {
	int x = 5;
	int *p;
	p = &x;
	square(p);
	return 0;
}
