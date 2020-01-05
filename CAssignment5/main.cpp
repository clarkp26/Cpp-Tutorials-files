#include <iostream>

using namespace std;

//Question 1
int sumArray(const int* arr, unsigned int size){
   if (size == 0){
   return 0;
   }
   else return arr[size-1] + sumArray(arr,size-1);
}

//Question 2
bool isPalindrome(const string& str, int i=0){
if (i == str.length()-1){
    return true;
}
if (str[i] == str[str.length()-1-i]){
    cout<< str[i] << str[str.length()-1-i] << endl;
    i++;
    return isPalindrome(str,i);
}
else return false;

}

//Question 3
double average(const double* d, unsigned int size){
if (size < 1){
    return 0;
}
 else return  (d[size-1] + (size-1)*average(d,size-1))/size;
}

//Question 4
class StringList{
private:
    int MaxSize;
    string *arr;
    //string[] arr;
    //string[] arr = new string[MaxSize];
public:
    StringList(const unsigned int);
    ~StringList();
    void add(string);
    void print();
    };

StringList::StringList(const unsigned int m){
    MaxSize = m;
    arr =new string[MaxSize];
}
StringList::~StringList(){
cout << "Object Destroyed!" << endl;
}
void StringList::add(string s){
    if(arr[MaxSize-1]!= ""){
        cout <<"Array Limit Reached!" << endl;
        return;
    }
for (int i=0;i<MaxSize;i++){
    if(arr[i]==""){
        arr[i] = s;
        cout << "String added to the array" << endl;
        return;
    }
   /* else{
        cout <<"Array Limit Reached!" << endl;
        return;
    }*/
}
}
void StringList::print(){
for(int i=0;i<MaxSize;i++){
    cout << "String " << i << ": " << arr[i]<< endl;
}
}

//Question 6
class Student{
protected:
    int id;
    string name,program;
public:
    Student(string,int,string);
    void display();
    };
Student::Student(string n,int i,string p){
    name=n;
    id=i;
    program=p;
}
void Student::display(){
cout << "Student Name: " << name << "\nID: " << id << "\nProgram: " << program << endl;
}
//Question 7
class ResearchStudent:public Student{
private:
    string supervisor, thesisTitle;
public:
    ResearchStudent(string,int,string,string,string);
    void display();
};
ResearchStudent::ResearchStudent(string n,int i,string p,string s,string t):
    Student(n,i,p),supervisor(s),thesisTitle(t)
    {}
void ResearchStudent::display(){
Student::display();
cout << "Supervisor: " << supervisor << "\nThesis Title: " << thesisTitle << endl;
}
int main(){
    //Question 1
int arr[] = {1,2,3,4,5,6,7};
int *p = arr;
cout << sumArray(arr,7) << endl;

//Question 2
/*cout << isPalindrome("hannah") << endl;
cout << isPalindrome("philip") << endl;
cout << isPalindrome("Darren") << endl;*/

//Question 3
//double a[] = {1,2,3,4,5,6,7};
//cout << average(a,7) << endl;

//Question 4
StringList x(3);
x.add("Philip");
x.add("Darren");
x.add("Sean");
x.print();
x.add("David");

//Question 6 and 7
/*Student p("Philip",1234,"Engineering");
p.display();
ResearchStudent rs("Darren",5678,"Chemistry","Dr. Wang","The Theory of the Craic");
rs.display();*/

//int[] arr = new int[6];
//int[] arrr = {1,2,3};
return 0;
}
