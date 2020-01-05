//============================================================================
// Name        : T2Q8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool scoresIncreasing(int x[], int size){
	for(int i=0;i<size;i++){
		if (x[i+1]<x[i]){
			return false;
		}
	}
	return true;
}

int main() {
	int x[] = {1,2,2};
	cout << scoresIncreasing(x,3) << endl; // prints !!!Hello World!!!
	return 0;
}
