/*
 * Fans.h
 *
 *  Created on: 24 Oct 2016
 *      Author: Philip
 */

#ifndef FANS_H_
#define FANS_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*#include "FootballTeam.h"
#include "Substitutes.h"
#include "Venue.h"*/

class Fans{
protected:
	string fans;
public:
	int x,y; // cast variables
	Fans(string f);
	virtual void display();

};


#endif /* FANS_H_ */
