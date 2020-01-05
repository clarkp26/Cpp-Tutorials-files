//============================================================================
// Name        : T1Q6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool sum28(int x[],int y){
	int count = 0;
	for (int i =0;i<y;i++){
		if (x[i]==2){
			count++;
		}
	}
	if(count==4){
		return true;
	}
	else return false;
}

int main() {
	int x[] = {2,4,2,2,5,2};
	int length = sizeof(x)/sizeof(x[0]);

	cout<< sum28(x,length) << endl;

	return 0;
}
