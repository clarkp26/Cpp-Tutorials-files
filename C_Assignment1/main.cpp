#include <iostream>

using namespace std;

//Question 1
void PrintNums(){
for (int i=-10;i<=10;i++){
        if(i==10){
            cout << i << endl;
        }
        else{
        cout << i << "," << endl;
        }
}
}

//Question 2
int ThirtyTwoMultiply(int a){
return a<<4;
}

//Question 3int minInt(int a){

//}
/*int maxInt(int a){
    cout << sizeof(a) << endl;
return a << (31 - sizeof(a));
}*/

//Question 4
void printPattern(int n){
    int k = 0;
for (int j=1;j<=n;j++){
        k = k+1;
   for (int i=k;i<=n;i++){
       cout << i << " ";
   }
cout << "" << endl;
}
}

//Question 5
 bool isPrime(int a){
 for (int i=2;i<a;i++){
    if(a%i==0){
        return false;
    }
 }
 return true;
 }

 //Question 6
string HelloName(string s){
return "Hello " + s;
}

//Question 7
string HelloNameTwo(string *p){
string s = *p;
return "hello "+s;
}

//Question 8
void exchange(double &x, double &y){
double xx = x;
double yy = y;
y = xx;
x = yy;
}

//Question 10
bool isOrdered(int a[],int size){
for (int i=1;i<size;i++){
    if(a[i]<=a[i-1]){
        return false;
    }
}
return true;
}

int main()
{
    //Question 1
   //PrintNums();

    //Question 2
    //cout << ThirtyTwoMultiply(67108864) << endl;

    //Question 3
    //cout << maxInt(67108864) << endl;


    //Question 4
    //printPattern(9);

    //Question 5
   //cout << isPrime(12) <<endl;

   //Question 6
   //cout << HelloName("Bob") << endl;

   //Question 7
   /*string s = "Jim";
   string *pointer = &s;
   cout << HelloNameTwo(pointer) << endl;*/

   //Question 8
   /*double p = 6;
   double q = 12;
   exchange(p,q);
   cout << p << endl;
   cout << q << endl;*/

   //Question 9
   /*char z[] = "Controlling complexity is the essence of computer programming.";
   char* seperateWords = strtok(z," ");
   string upperSentence= "";
   while (seperateWords != NULL){
    seperateWords[0] = toupper(seperateWords[0]);
    upperSentence = upperSentence + seperateWords[0] + " ";
    seperateWords = strtok (NULL, " ");
   }
   cout << upperSentence << endl;*/

   //Question 10
   int x[] = {1,2,3,4,5,6,7};
   int y[] = {1,2,3,4,1,5};
   cout << isOrdered(x,7) << endl;
   cout << isOrdered(y,6) << endl;

    return 0;
}
