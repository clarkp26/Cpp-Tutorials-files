//============================================================================
// Name        : Test.cpp
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


class FootballTeam{
private:
	void construct();
protected:
	int fbnum;
	string goalkeeper;
	string defender;
	string midfielder;
	string striker;
	friend void ReturnGK(FootballTeam &);
	static int FBTnumber;

public:
	int x; // casting variable
	FootballTeam(string gk,string df, string md, string sk);
	FootballTeam(string gk,string df, string md);
	FootballTeam(string gk,string df);
	FootballTeam(const FootballTeam &);//copy constructor

	FootballTeam operator + (FootballTeam);
	FootballTeam operator = (FootballTeam);
	bool operator == (FootballTeam);

	virtual void display();
	virtual ~FootballTeam();
	//virtual string getSub()=0;//part 6

	string NonVirtualExample(){
		return "Average Team";
	};
	virtual void OutputVector(FootballTeam);
};


