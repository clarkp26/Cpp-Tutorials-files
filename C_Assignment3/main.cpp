#include <iostream>

using namespace std;

//Question 1
unsigned int SumDigits(unsigned int a){
    unsigned int total = 0;
    while (a != 0){
        total += a%10; //adds 3
        a = a/10; // 12
    }
    return total;
}

//Question 2
int prefix(string a, string b){
    int i=0;
    int ans = 0;
    while (i < a.length() && i < b.length()){
        if (a[i] == b[i]){
            ans = ans +1;
        }
        i++;
    }
    return ans;

}

// Question 3
class Rectangle{
private:
    double length,width;
public:
    double area();
    void info();
    Rectangle(double,double);
    //Question 4
    Rectangle(double,double,double,double);
    //Question 5
    bool Congruent(Rectangle);

};

Rectangle::Rectangle(double l,double w){
    length =l;
    width = w;
}
//Question 4
Rectangle::Rectangle(double x,double y, double a,double b){
    length = a-x;
    width = b-y;
}
void Rectangle::info(){
    cout << "length: " << length << endl;
    cout << "width: " << width << endl;
}
double Rectangle::area(){
    return length*width;
}

//Question 5
bool Rectangle::Congruent(Rectangle){
    if(length == x.length && width == x.width){
        return true;
    }
    else
        return false;

    //return false;
}

int main()
{
    //Question 1
   cout << SumDigits(123) << endl;

   //Question 2
   cout << prefix("program","progress") << endl;

   //Question 3
   /*Rectangle r = Rectangle(5,2);
   r.info();
   cout << "Area: " << r.area() << endl;*/

   //Question 4 and 5
  Rectangle r1(8.9, 12.5);
  Rectangle r2(-1.5, -1.5, 7.4, 11.0);
  r1.info();
  r2.info();
  if (r1.Congruent(r2))  cout << "Congruent" << endl;
  else  cout << "Not Congruent" << endl;
    return 0;
}
