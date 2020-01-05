//============================================================================
// Name        : T2Q9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool hasOne(int x)
{
	if(x%10 ==1){
		return true;
	}
	else{
		x=x/10;
		   if(x==0){
			  return false;
		   }
		return hasOne(x);
	}
}

int main() {
	cout << hasOne(2695223) << endl; // prints !!!Hello World!!!
	return 0;
}
