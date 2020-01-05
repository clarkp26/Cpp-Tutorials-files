/*
 * Sensor.h
 *
 *  Created on: 6 Jan 2017
 *      Author: Philip
 */

#ifndef SENSOR_H_
#define SENSOR_H_


#include <iostream>


class Sensor{
private:
	std::string name;
	std::string units;
	float value;
public:
	Sensor(std::string,std::string,float);
	virtual void display();
	virtual void setName(std::string x);
	virtual std::string getName();
	virtual void setUnit(std::string x);
	virtual std::string getUnit();
	virtual void setValue(float x);
	virtual float getValue();
	virtual ~Sensor();
	bool operator < (const Sensor& s) const {
	 return (name < s.name ? true : false ); }
	 bool operator == (const Sensor& s) const {
	 return (name == s.name ? true : false ); }
};


#endif /* SENSOR_H_ */
