//============================================================================
// Name        : T2Q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int BlackJack(int x,int y){
	if (x>=y && x<=21){
		return x;
	}
	else if (y>x && y<=21){
		return y;
	}
	else if(x>21 && y<=21){
		return y;
	}
	else if(y>21 && x<=21){
		return x;
	}
	else return 0;
}

int main() {
	cout <<BlackJack(43,25)<< endl;
	return 0;
}
