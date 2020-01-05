//============================================================================
// Name        : T1Q5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int CountEvens(int x[], int y){
	int count = 0;
	for(int i=0;i<y;i++){
		if((x[i]%2)==0){
			count++;
		}
	}
	return count;
}

int main() {
int x[] = {1,2,3,4,5,6,8};
int length = sizeof(x)/sizeof(x[0]);
int ans = CountEvens(x,length);
cout << length << endl;
	cout << ans << endl;
	return 0;
}
