#include <iostream>
#include<math.h>

using namespace std;
class Complex{
protected:
    int real;
    int imaginary;
public:
    Complex(int,int);
    void display();
    void add(Complex);
    double magnitude();
};
  Complex::Complex(int r, int i){
      real = r;
      imaginary = i;
  }

  void Complex::display(){
      cout << real << " + " << imaginary << "j" << endl;
  }

  void Complex::add(Complex o){
      real = real + o.real;
      imaginary = imaginary + o.imaginary;
  }
  double Complex::magnitude(){
      return sqrt((real*real)+(imaginary*imaginary));
  }

int main()
{
    //Complex object = Complex(1,2);
    //object.display();

    Complex c1 = Complex(3, 4);
    Complex c2 = Complex(2, 5);

    cout << "Magnitude of ";
    c1.display();
    cout << "  +  ";
    c2.display();
    c1.add(c2);
    cout << " = " << c1.magnitude() << endl;


    return 0;
}
