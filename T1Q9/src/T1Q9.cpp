//============================================================================
// Name        : T1Q9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int ans=1;
int Factorial(int n){
	if(n!=1){
		ans = ans*n;
		n=n-1;
		return Factorial(n);
	}
	else return ans;
}
int main() {
	cout << Factorial(5) << endl;
	return 0;
}
