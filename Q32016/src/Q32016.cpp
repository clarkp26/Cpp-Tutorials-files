//============================================================================
// Name        : Q32016.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//#include <iostream>
//using namespace std;

#include<iostream>
using namespace std;
// namespace MolloySpace
// {
// float testAdd(float a, float b) { return a+b; }
//
// class Time
// {
// public: //etc.
// };
// }
//
// using std::cout;
// using std::endl;
// using namespace MolloySpace;
// //using MolloySpace::Time;
class A{
private:
public:
	virtual void display(){
			cout << "Nooooo" << endl;
		}
	A();
};
A::A(){}
class X{
public:
	virtual void display(){
		cout << "yeeooo" << endl;
	}
};
class B: public A,X{
private:
public:
	virtual void display(){
		A::display();
		X::display();
		cout << "yup shes worked there no bother" << endl;
	}
	B();
};

B::B(){}
int main() {
	/*static cast*/
//		float y = 20.12;
//		int x = static_cast<int>(y);
//		cout<<x<<endl;
//	/*dynamic cast*/
//	A *aa = new B();
//	B *ba = static_cast<B*>(aa);

	B x = new B();
	x.display();

	return 0;
}
