//============================================================================
// Name        : T1Q3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool MonkeyTrouble(bool a, bool b){
	if((a==true && b ==true) || (a==false && b ==false)){
		return true;
	}
	else return false;
}

int main() {
	cout << MonkeyTrouble(true,false) << endl;
	return 0;
}
