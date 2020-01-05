//============================================================================
// Name        : T2Q4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Vehicle{

protected:
	string colour;
	string make,model;

public:
	Vehicle(string,string, string );
    virtual void display();
};
Vehicle::Vehicle(string col,string ma, string mo){
colour=col;
make=ma;
model=mo;
}
void Vehicle::display()
{
	cout << " Colour:" << colour << "\n Make:" << make << "\n Model:" << model << endl;
}
class Car: public Vehicle{
protected:
	int seats;

public:
	Car(string,string, string,int);
	virtual void display();
};

Car::Car(string col,string ma, string mo,int s):
	Vehicle(col,ma,mo),seats(s)
{}

void Car::display()
{
	cout << " Colour:" << colour << "\n Make:" << make << "\n Model:" << model << "\n Seats:" << seats << endl;
}
int main() {
Vehicle aye("Blue","Audi","A4");
aye.display();
Car ohaye("Black","Toyota","Corolla",5);
ohaye.display();
	return 0;
}
