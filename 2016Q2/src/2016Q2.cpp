//============================================================================
// Name        : 2016Q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Sensor.h"
#include "Aggregator.h"
#include <vector>
#include <algorithm>





int main() {
	Sensor one("Big Sensor Lad","Units all day",21);
	Sensor two(" "," ",3);
	two.setName("Bob");
	two.setUnit("yeooo");
	two.setValue(20);
	one.display();
	two.display();
	Aggregator a;
	a.addReading(one);
	a.addReading(two);
	a.getMinimum();
	a.display();

	return 0;
}
