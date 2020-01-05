/*
 * Venue.h
 *
 *  Created on: 24 Oct 2016
 *      Author: Philip
 */

#ifndef VENUE_H_
#define VENUE_H_


#include <iostream>
#include <string>


using namespace std;

#include "FootballTeam.h"

#include "Fans.h"

class Venue: public FootballTeam, public Fans{
private:

public:
	Venue(string gk,string df, string md, string sk,string f);
	virtual void display();
};

#endif /* VENUE_H_ */
