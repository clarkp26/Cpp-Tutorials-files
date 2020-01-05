//============================================================================
// Name        : Q22015.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

namespace DCU{
//using namespace std;
//#include <string>
//#include <vector>
//#include <algorithm>

class Staff{
protected:
	 string name,officeNum;
	 int ID;
public:
	 Staff(string,string,int);
	 virtual string getType() = 0;
	 virtual void display();

};

Staff::Staff(string n, string o,int i){
	name = n;
	officeNum = o;
	ID = i;
}

void Staff::display(){
	cout<< "A " << this->getType() << " with name: " << name << endl;
	cout << "ID number: " << ID << " and office: " << officeNum << endl;
}

class Lecturer: public Staff {
private:
	std::vector<string> v;
	static void displayFormat(string);
public:
	Lecturer(string,string,int,vector<string>);
	virtual string getType(){return "Lecturer";}

	virtual void display();
};

Lecturer::Lecturer(string n,string o,int i,vector<string> vv):
	Staff(name,officeNum,ID),v(vv){}

void Lecturer::display(){
//	cout<< "A Lecturer with name: " << name << endl;
	Staff::display();
	cout<< "And has the 4 modules: [";
	for_each(v.begin(), v.end(), displayFormat);
//	for (vector<string>::iterator t = v.begin(); t != v.end();++t){
//		cout << t;
//	}
	cout << "]" << endl;
}
void Lecturer::displayFormat(string module){
cout << module << " ";
}


class Administrator: public Staff {
private:
	std::string role;
public:
	Administrator(string,string,string,int);
	virtual string getType(){return "Administrator";}
	virtual void display();

};

Administrator::Administrator(string name,string officeNum, string r,int ID):
		Staff(name,officeNum,ID),role(r){}

void Administrator::display(){
//	cout<< "A Administrator with name: " << name << endl;
		Staff::display();
		cout << "and has the role: "<< role << endl;
}
}
using namespace DCU;
void display(Staff *s){
	s->display();
}
int main() {
	vector<string> v;
	v.push_back("EE219");
	v.push_back("EE232");
	v.push_back("EE265");
	Lecturer a("Dave","20",12345,v);
    Administrator b("Dean","24","spy",54322);
    a.display();
    b.display();

    vector<Staff*> staff;
    Staff *aa = &a;
    Staff *bb = &b;
    staff.push_back(aa);
    staff.push_back(bb);
//    for(vector<Staff*>::iterator t = staff.begin(); t!= staff.end(); ++t){
//    	t.display();
//    }
    for_each(staff.begin(),staff.end(),display);
	return 0;
}
