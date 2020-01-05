//============================================================================
// Name        : T3Q5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string MirrorEnds(string x){
	int j = x.length()-1;
	int i = 0;
	string ans = "";
	while(i < x.length()){
		if (x[i] == x[j]){
			ans = ans + x[i];
		}
		else {
			return ans;
		}
		i++;
		j--;
	}
	return ans;

}

int main() {
	cout << MirrorEnds("navan")<< endl;
	cout << MirrorEnds("abXYZba")<< endl;
	return 0;
}
