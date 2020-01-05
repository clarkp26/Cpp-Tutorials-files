#include <iostream>

using namespace std;
//Question 6
class Publication{
protected:
    string author,title;
    int year;
public:
    Publication(string,int,string);
    //Question 8
   // void printBook(Publication);
    void display();

};

Publication::Publication(string a,int y, string t){
    author = a;
    year = y;
    title = t;
}

void Publication::display(){
    cout << "Author: " << author << "\nYear: " << year << "\nTitle: " << title << endl;
}

//Question 8
/*void Publication::printBook(Publication *p){
    Publication x = *p;
    x.display();
}*/

//Question 7
class Book: public Publication {
private:
    string member;
public:
    Book(string,int,string,string);
    virtual void display();
};
Book::Book(string au,int ye,string ti,string m):
    Publication(au,ye,ti),member(m)
{}

void Book::display(){
    Publication::display();
    cout << "Member: " << member << endl;
}

//Question 9
void solve2x2(double a[2][3], double &x_sol, double &y_sol){
    double denominator = (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]);
    double x_numerator = (a[0][2]*a[1][1]) - (a[1][2]*a[0][1]);
    double y_numerator = (a[0][0]*a[1][2]) - (a[1][0]*a[0][2]);
    x_sol = x_numerator/denominator;
    y_sol = y_numerator/denominator;

}

//Question 10
class GuessingGame {
private:
    int maximum;
public:
    GuessingGame(int);
    bool guess(int);
};

GuessingGame::GuessingGame(int m){
    maximum = m;
}

bool GuessingGame::guess(int g){
    if (g > maximum){
        cout << "Guess Exceeds Max Number Allowed.Please Try Again" << endl;
        return false;
    }
    if (g == 234){
        cout << "You Have Guessed Correctly. Congratulations!!!" << endl;
        return true;
    }
    else
        cout << "Your Guess was Incorrect. Please Try Again" << endl;
        return false;

}


int main()
{
    //Question 6
    //Publication x = Publication("J.K. Rowling",2000,"Harry Potter");
    //x.display();

    //Question 7
    //Book y = Book("Roald Dahl",1996,"BFG","Philip");
    //y.display();

    //Question 8
    /*Publication x = Publication("J.K. Rowling",2000,"Harry Potter");
    Book y = Book("Roald Dahl",1996,"BFG","Philip");
    Publication *p = &x;
    Publication *q = &y;
    printBook(p);*/
   // printBook(q);

   //Question 9
   double x[2][3] = {{3,-2,10},
                     {4,2,-7}};
    double y[2][3] = {3,-2,10,4,2,-7};
  //  cout << x[0][0] << " " << x[0][1] << " " << x[0][2] << endl;
  //  cout << x[1][0] << " " << x[1][1] << " " << x[1][2] << endl;

   double x_sol = 0;
   double y_sol = 0;
   solve2x2(x,x_sol,y_sol);
   cout << "x: " << x_sol << "y: " << y_sol << endl;

   //Question 10
   GuessingGame game(1000);
   unsigned int n;
   while ((cin >> n) && !game.guess(n));


    return 0;
}
