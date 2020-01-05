#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Question 1
/*char frequentChar(const string &str){
int final_total = 0;
int tmp_total = 0;
char ans = 'a';
char s = 'a';
while(s != '{'){
   for (int i=0;i<str.length();i++){
       if(str[i] == s){
           tmp_total++;
       }
   }
   if (tmp_total > final_total){
       final_total = tmp_total;
       ans =s;
   }
   tmp_total = 0;
s++;
}
//cout << s << endl;
return ans;
}*/

//Question 2
class Point2D{
private:
    double x,y;
public:
    Point2D(double,double);
    void print();
    Point2D midPoint(const Point2D);
};

Point2D::Point2D(double i, double j){
x = i;
y = j;
}

void Point2D::print(){
cout<< "(" << x << "," << y << ")" << endl;
}

Point2D Point2D::midPoint(const Point2D p1){
    double mid_x = (x + p1.x)/2;
    double mid_y = (y + p1.y)/2;
    return Point2D(mid_x,mid_y);
}

//Question 3
class Color {
protected:
    double red,green,blue;
public:
    Color(double,double,double);
    double r();
    double g();
    double b();
    string toString();
    //Question 4
    Color(const Color&);
    static Color maxRed(Color[],int);

};

Color::Color(double r,double g,double b){
red = r;
green = g;
blue = b;
cout << "Original Color Object Made" << endl;
}

string Color::toString(){
stringstream one;
one << red;
string redval = one.str();

stringstream two;
two << green;
string greenval = two.str();

stringstream three;
three << blue;
string blueval = three.str();

return "(" + redval + "," + greenval + "," + blueval + ")";
}

double Color::r(){
return red;
}
double Color::g(){
return green;
}
double Color::b(){
return blue;
}

//Question 4
Color::Color(const Color &clr){
red =clr.red;
green = clr.green;
blue=clr.blue;
cout << "Duplicate Color Object has been made!" << endl;
}

Color Color::maxRed(Color carr[], int size){
Color biggest = Color(0,0,0);
for(int i=0;i<size;i++){
    if(carr[i].red > biggest.red){
        biggest = carr[i];
    }
}
cout << biggest.red << endl;
cout << biggest.green << endl;
cout << biggest.blue << endl;
return biggest;
}

//Question 5
class Shape: public Color{
private:
    string shape;
    int ShapeID;
    //Question 6
    static int ShapesCreated;
    static int ShapesDestroyed;
public:
    Shape(string,Color);
    // Makes The class Abstract
    //virtual string info() = 0;
    string info();
    //Question 6
    ~Shape();
    static int ShapesCount();
    int id();
};

//Question 6
int Shape::ShapesCreated =0;
int Shape::ShapesDestroyed =0;

int Shape::ShapesCount(){
return ShapesCreated - ShapesDestroyed;
}

Shape::~Shape(){
    ShapesDestroyed++;
cout << "Shapes Destroyed: " << ShapesDestroyed << endl;
}

int Shape::id(){
return ShapeID;
}


Shape::Shape(string s,Color c):
Color(c.r(),c.g(),c.b()),shape(s)
{ShapesCreated++;
ShapeID = ShapesCreated;}

string Shape::info(){
    stringstream s;
    s << ShapesCreated;
    string sval = s.str();
    string id = sval;
    return Color::toString() + "\nShape: " + shape + "\nShape ID Number: " + id + "\nShapes Created: "+sval;
}

//Question 7
class Circle: public Shape{
private:
    int id;
    int radius;
public:
    string info();
    Circle(Shape,int);
};

Circle::Circle(Shape x, int r):
    Shape("Circle",Color(x.r(),x.g(),x.b())),radius(r)
    {id = x.id();}

string Circle::info(){
    stringstream s;
    s << radius;
    string rad = s.str();

    stringstream p;
    p << id;
    string id = p.str();

    return Shape::toString() + "\nShape ID: " + id + "\nRadius: " + rad;

}

class Rectangle: public Shape{
private:
    int id;
    int x,y;
public:
    string info();
    Rectangle(Shape,int,int);
};

Rectangle::Rectangle(Shape x, int xx,int yy):
    Shape("Rectangle",Color(x.r(),x.g(),x.b())),x(xx),y(yy)
    {id = x.id();}

string Rectangle::info(){
    stringstream s;
    s << x;
    string xx = s.str();

    stringstream q;
    q << y;
    string yy = s.str();

    stringstream p;
    p << id;
    string id = p.str();

    return Shape::toString() + "\nShape ID: " + id + "\nCoordinates: (" + xx + "," + yy + ")";

}

//Question 8
/*void PrintShapeArray(Shape* shapes[],int size){
for (int i=0;i<size;i++){
    cout << shapes[i].info() << endl;
}
}*/

int main(){

  //Question 1
  //string str = "philipp";
  //cout << frequentChar(str) << endl;

  //Question 2
  /*  Point2D first = Point2D(1,2);
    Point2D second = Point2D(4,6);
    first.print();
    second.print();
    Point2D mid = first.midPoint(second);
    mid.print();*/

    //Question 3
    /*Color c = Color(0.2,0.7,0.4);
    //cout << c.toString() << endl;
    cout << "red: " << c.r() <<endl;
    cout << "green: " << c.g() <<endl;
    cout << "blue: " << c.b() <<endl;*/

    //Question 4
    /*Color c(0.2,0.7,0.4);
    Color d(0.6,0.1,0.3);
    Color e(0.3,0.5,0.8);
    Color f(0.5,0.1,0.2);

    Color dup = Color(c);
       cout << c.toString() << endl;

    Color colors[] = {c,d,e,f};
    //Color colors[] = {Color c(0.2,0.7,0.4),Color d(0.6,0.1,0.3),Color e(0.3,0.5,0.8),Color f(0.5,0.1,0.2)};

    Color::maxRed(colors,4);*/

    //Question 5
    Color x(0.5,0.9,0.1);
    Shape y("Circle",x);
    //cout << y.info() << endl;
//    delete y;
    //Question 6
    //cout << "Shapes Alive Currently: " << Shape::ShapesCount() << endl;
    //cout << "ID: " << y.id() << endl;

    //Question 7
    Circle z(y,3);
    Rectangle r(y,5,4);
    cout << z.info() << endl;
    cout << r.info() << endl;


    return 0;

}
