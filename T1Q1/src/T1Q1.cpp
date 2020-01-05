/*
 * Question1.cpp
 *
 *  Created on: 15 Sep 2016
 *      Author: Philip
 */

#include <iostream>
using namespace std;

double DoubleSum(double x, double y){
	double xx = x+y;
	if(x==y){
		return xx*2;
	}
}

int main(){

	cout << "The Answer is " << DoubleSum(2,2) << endl;
	return 0;
}


