#include <iostream>

using namespace std;

//Question 1
int largest(int a[],int size){
    int largest = 0;
    for (int i=0;i<size;i++){
        if(a[i]>largest){
            largest = a[i];
        }
    }
    return largest;
}

//Question 2
double Average(double d[],int size){
double total = 0;
for (int i=0;i<size;i++){
    total = total + d[i];
}
return total/size;
}

//Question 3
void rotateLeft(int a[],int size){
    int x = a[0];
   for (int i=0;i<size-1;i++){
       a[i] = a[i+1];
   }
a[size-1]= x;
}

//Question 4
/*void printBinary(int a) {
    unsigned int t = 1<<(sizeof(int)*8-1);
    cout << t << endl;
    for (int i=0; i<sizeof(int)*8; i++) {
        cout << ((a & (t>>i)) != 0);
        if ((i+1)%8 == 0) cout << " ";
    }
    cout << endl;
}*/
//Question 5
void swap(int* p,int* q){
int tmp1 = *p;
*p = *q;
*q = tmp1;
}

//Question 6
int countOdds(int a[],int size){
int c = 0;
for (int i=0;i<size;i++){
    if(a[i]%2 == 1){
        c++;
    }
}
return c;
}

//Question 7
void isPalindrome(string s){
for (int i=0;i<s.length()/2;i++){
    if (s[i] != s[s.length()-i-1]){
        cout << "The String is not a Palindrome" << endl;
        return;
    }
}
cout << "The string is a palindrome" << endl;
return;
}

//Question 8
void mergeSorted(const string s1, const string s2, string &s3){
    s3 = "";
    string s4 = "";
    int i = 0;
    int j=0;
    while (i < s1.length() && j < s2.length()){
        if(s1[i] < s2[j]){
            s3 += s1[i];
            i++;
        }
        else if(s2[j] < s1[i])
            {
            s3 += s2[j];
            j++;
        }
    }
//cout <<  s3 << endl;
}


int main()
{
    //Question 1
    //int a[] = {1,2,3,4,5,6,7,3};
    //cout << largest(a,8) << endl;

    //Question 2
    //double x[] = {1,2,3,4,5,6,7,8};
    //cout << Average(x,8) << endl;

    //Question 3
    /*int a[] = {1,2,3,4,5,6,7};
    rotateLeft(a,7);
    for (int i=0;i<7;i++){
        cout << a[i] << " ";
    }*/

    //Question 4
    //printBinary(-10);

    //Question 5
    /*int t1 = 3;
    int t2 = 7;
    swap(&t1, &t2);
    cout << "t1 = " << t1 << " and t2 = " << t2 << endl;*/

    //Question 6
    //int a[] = {1,2,3,4,5,6,7};
    //cout << countOdds(a,7) << endl;

    //Question 7
    //isPalindrome("Hello");
    //isPalindrome("hannah");

    //Question 8
    string result = "";
    mergeSorted("cdfgknpqux","abehijlmorstvwyz",result);
    cout << result << endl;
    return 0;
}
