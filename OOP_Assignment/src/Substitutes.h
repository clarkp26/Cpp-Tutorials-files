/*
 * Substitutes.h
 *
 *  Created on: 24 Oct 2016
 *      Author: Philip
 */

#ifndef SUBSTITUTES_H_
#define SUBSTITUTES_H_


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Substitutes: public FootballTeam{
private:
	string substitute;
public:
	Substitutes(string gk,string df, string md, string sk,string sb);
	Substitutes(string sb);
	virtual void display();
	virtual string getSub();

	string NonVirtualExample(){
		FootballTeam::NonVirtualExample();
			return "Substitutes Team";
		};

};


#endif /* SUBSTITUTES_H_ */
