//============================================================================
// Name        : T3Q1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int WordsCount(string a[],int size,int length){
	int count = 0;
	for (int i=0;i<size; i++){
		int check = a[i].length();
		if ( check == length){
			count++;
		}
	}
	return count;
}
int main() {
	string a[] = {"a","bb","ccc","d"};
	cout << WordsCount(a,4,4) << endl;
	return 0;
}
