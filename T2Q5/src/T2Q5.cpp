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
	int VehicleNumber;
	static int initialiser;

public:
	Vehicle(string,string, string);
    virtual void display();
};
int Vehicle::initialiser= 10000;

Vehicle::Vehicle(string col,string ma, string mo){
colour=col;
make=ma;
model=mo;
VehicleNumber = initialiser++;
}
void Vehicle::display()
{

	cout << " Colour:" << colour << "\n Make:" << make <<
			"\n Model:" << model << "\n Vehicle Number:" << VehicleNumber << endl;

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

	cout << " Colour:" << colour << "\n Make:" << make << "\n Model:"
			<< model << "\n Seats:" << seats <<  "\n Vehicle Number:" << VehicleNumber << endl;
}
int main() {
Vehicle aye("Blue","Audi","A4");
aye.display();
Vehicle ohaye("Black","Toyota","Corolla");
ohaye.display();
Car eeehh("Orange","Ford","Fiesta",6);
eeehh.display();
	return 0;
}
