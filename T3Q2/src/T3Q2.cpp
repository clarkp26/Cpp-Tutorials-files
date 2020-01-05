//============================================================================
// Name        : T3Q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;



class Statistics{
private:
	//double a[50];
	//double *a; //for Q4 cant have set number for array
	//int arrayLength;
	vector<double> a;
public:
	Statistics(double aa[],int bb);
	virtual void display();
//	void OutputFunction(int x);
	double max();
	double min();
	double average();
};
Statistics::Statistics(double aa[],int bb){
//	a = new double[bb]; //sets pointer equal new array of whatever length specified
	for( int i=0;i<bb;i++){
//		*(a+i) = aa[i];
		a.push_back(aa[i]);
	}
}

void OutputFunction(double x){
	cout << x << endl;
}

void Average(double x){

}

void Statistics :: display(){
	/*cout << "Array contents are: [";
	for (int i =0; i<arrayLength;i++){
		cout <<  a[i] << "," ;
	}
	cout << "] "<< endl;*/
	sort(a.begin(), a.end());
	for_each(a.begin(), a.end(), OutputFunction);
	cout << "just finished" << endl;
}


double Statistics:: max(){
//	int biggest = a[0];
//	for(int i=1;i<arrayLength;i++){
//		if (a[i] > biggest){
//			biggest = a[i];
//		}
//	}
//	return biggest;
//	sort(a.begin(), a.end());
//	double largest = a.end();
//	return largest;
	double biggest = *max_element(a.begin(),a.end());
	return biggest;
}


double Statistics:: min(){
////	int smallest = a[0];
////	for(int i=1;i<arrayLength;i++){
////		if (a[i] < smallest){
////			smallest = a[i];
////		}
////	}
////	return smallest;
//	sort(a.begin(), a.end());
//	double smallest = a.begin();
    double smallest = *min_element(a.begin(),a.end());
	return smallest;
}

double Statistics:: average(){
//	int total = 0;
//	for (int i=0;i< arrayLength;i++){
//		total = total + a[i];
//	}
//	return total/arrayLength;
	double ans = accumulate(a.begin(),a.end(),0/a.size());
	double count = count(a.begin(),a.end());
	return ans/count;
}

int main() {
	double a[] = { 21,32,54,32,50,67,76,55,11,23};
	int arrayLength = 10;
	Statistics s(a,arrayLength);
	s.display();
//	vector<int> ss;
//	ss.push_back(1);
//	ss.push_back(2);
	cout << s.max() << endl;
	cout << s.min()<< endl;
	cout << s.average()<< endl;
//	for_each(ss.begin(), ss.end(), OutputFunction);
	return 0;
}