/*
 * Sensor.cpp
 *
 *  Created on: 7 Jan 2017
 *      Author: Philip
 */

#ifndef SENSOR_CPP_
#define SENSOR_CPP_

#include "Sensor.h"
//#include <algorithm>
using namespace std;

Sensor::~Sensor(){
	cout << "Sensor gone hi" << endl;
}
Sensor::Sensor(std::string n,std::string u,float v){
	name = n;
	units = u;
	value = v;
}

void Sensor::display(){
	cout << name << endl;
	cout << units << endl;
	cout << value << endl;

}
void Sensor::setName(std::string x){
	name = x;
}
std::string Sensor::getName(){
	return name;
}
void Sensor::setUnit(std::string x){
	units = x;
}
std::string Sensor::getUnit(){
	return units;
}
void Sensor::setValue(float x){
	value = x;
}
float Sensor::getValue(){
	return value;
}

#endif /* SENSOR_CPP_ */
