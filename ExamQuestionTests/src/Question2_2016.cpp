//============================================================================
// Name        : ExamQuestionTests.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sensor{
private:
	string name;
	string units;
	float value;
public:
	Sensor(string,string,float);
	virtual void display();
	virtual ~Sensor();
};
Sensor::~Sensor(){
	cout << "Sensor gone hi" << endl;
}
Sensor::Sensor(string n,string u,float v){
	name = n;
	units = u;
	value = v;
}

void Sensor::display(){
	cout << name << endl;
	cout << units << endl;
	cout << value << endl;

}

int main() {
	Sensor one("Big Sensor Lad","Units all day",21);
	one.display();
	return 0;
}
