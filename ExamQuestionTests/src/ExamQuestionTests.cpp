//============================================================================
// Name        : ExamQuestionTests.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int x = 1;

int* addArray(int a[]){
	for(int i=0;i<4;i++){
		a[i] = 1;
	}
	return a;
}
class B {
protected:
	int x;
};
class A : public B{
private:
	int x;
public:
	virtual void Inc(){
		x = 2;
		B::x = 3;
		cout << "class As x = " << x << endl;
		cout << "class Bs x = " << B::x << endl;
		cout << "Global x = " << ::x<< endl;
	}
};

int main() {
	A a;
	a.Inc();

	int array[] ={1,2,3,4};
	int ans[] ={};

	for (int i=0;i<3;i++){
		cout << ans[i] <<endl;
	}

	int z;
	cout << z << endl;

	B *bb = new B();
	A *aa = new A();

    aa = (A*) bb;



	return 0;
}
