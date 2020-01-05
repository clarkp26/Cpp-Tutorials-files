#include <iostream>

using namespace std;


class Point2D{
protected:
    double x, y;
public:
    Point2D();
    Point2D(double,double);
    virtual void print();
};

Point2D::Point2D(){
x=0;
y=0;
}

Point2D::Point2D(double x1,double y1):
    x(x1), y(y1)
    {}
void Point2D::print(){
cout << "coords=(" << x << "," << y << ")";
}

class Pixel: public Point2D{
private:
    int green,red,blue;
public:
    Pixel(double,double,int,int,int);
    void print();
};

Pixel::Pixel(double x1,double y1, int r,int g, int b):
    Point2D::Point2D(x1,y1),red(r),green(g),blue(b)
    {}
void Pixel::print(){
Point2D::print();
cout<< "color=(";
cout << red << "," << green << "," << blue << ")";
}

class Publication {
protected:
    string author,title;
public:
    Publication(string ar, string tl): author(ar),title(tl){};
    virtual void display(){cout << author << ", "<< title;}
};

class Book: public Publication {
private:
    string year,publisher;
public:
    Book(string,string,string,string);
    void display();
};
Book::Book(string a,string t,string y, string p):
Publication(a,t),year(y),publisher(p)
{}
void Book::display(){
Publication::display();
cout << year << ", " << publisher;
}

int count(int key,int arr[],int size){
int c = 0;
for (int i=0;i<size;i++){
    if(arr[i] == key){
        c++;
    }
}
return c;
}

int countOnes(int n){
    if (n<=0){
        return 0;
    }
    if (n%10 == 1){
        return 1+countOnes(n/10);
    }
    else return countOnes(n/10);
}
class DataArray{
private:
    double arr[];
    int size;
public:
    DataArray(int);
    DataArray(double[],int);
    ~DataArray();
    DataArray scaleBy(double factor);
};

DataArray::DataArray(int s){
    arr[s];
    size=s;
}
DataArray::DataArray(double a[],int s){
for (int i=0;i<s;i++){
    arr[i] = a[i];
}
size =s;
}
DataArray::~DataArray(){
cout << "DataArray object destroyed" << endl;
}
DataArray DataArray::scaleBy(double factor){
double ans[size];
for (int i=0;i<size;i++){
    ans[i] = arr[i]/factor;
}
DataArray x = DataArray(ans,size);
return x;
}
int main()
{
   /* Point2D x =  Point2D();
    Point2D y = Point2D(3, 4);
    x.print();
    y.print();

    Pixel z = Pixel(2,3,4,5,6);
    z.print();*/
    Point2D *pointers[10];

    for (int i=0;i<10;i++){

        pointers[i] = new Pixel(i+1,i+1,0,0,0);
        pointers[i]->print();
    }


    Publication* b = new Book("Harry", "went", "home" ,"lad");
    b->display();

    /*int arr[] = {34,2,4,2,56,2,57};
    cout << count(2,arr,7);*/

   /* int arr[] = {10,10,20,30,40};
    int* p = arr;
    while (++p <= &arr[4]) *p+=10;
    for(int i=0;i<5;i++) cout << arr[i] << " ";*/

    //cout << countOnes(101170);
    return 0;
}
