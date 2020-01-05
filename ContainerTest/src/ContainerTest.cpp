//============================================================================
// Name        : ContainerTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void OutHi(int x){
	cout << x << endl;
}

int main() {
	int array[] = {1,2,3,4,5,6,7};
	vector<int> vect;

	for (int i=0;i<7;i++){
		vect.push_back(array[i]);
	}
//	vect.push_back(1);
//	vect.push_back(5);
//	vect.push_back(2);

	sort(vect.begin(), vect.end());
	for_each(vect.begin(), vect.end(), OutHi);

	return 0;
}
