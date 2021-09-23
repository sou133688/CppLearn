#include <iostream>
using namespace std;

int myabs(int n);
long myabs(long n);
double myabs(double n);

int main(){
    cout << "-10の絶対値:" << myabs(-10) << "\n\n";
    cout << "-10Lの絶対値:" << myabs(-10L) << "\n\n";
    cout << "-10.01の絶対値:" << myabs(-10.01) << "\n\n";
    return 0;
}

int myabs(int n){
    cout<<"整数のmyabs()\n";
    return n<0? -n : n;
}

long myabs(long n){
    cout<<"長整数のmyabs()\n";
    return n<0? -n : n;
}

double myabs(double n){
    cout<<"不動小数点数のmyabs()\n";
    return n<0? -n : n;
}