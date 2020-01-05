//============================================================================
// Name        : T3Q6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int count =0;

int count7s(int x){
	if (x%10 == 7){
		count++;
	}
	if (x/10 !=0){
		return count7s(x/10);
	}
	else return count;
}

int main() {
	cout << count7s(7171717) << endl;
	return 0;
}
