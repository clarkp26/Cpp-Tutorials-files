#include <iostream>;

using namespace std;

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

int main(){

    Point2D first = Point2D(1,2);
    Point2D second = Point2D(4,6);
    first.print();
    second.print();
    Point2D mid = first.midPoint(second);
    mid.print();


return 0;
}
