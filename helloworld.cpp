#include<iostream>
using namespace std;

int main(){

    //hello world    
    cout << "hello world!\n";

    //output numbers
    int i,j;
    double d;

    i=10;
    j=20;
    d=99.101;

    cout<<"out\n";
    cout << i << ' ' << j << ' ' << d << "\n";

    //input and output numbers

    int a;
    float b;
    char c[80];

    cout << "Input integer,decimal,character.";
    cin >> a >> b >> c;

    cout << "Out: " << a << " " << b << " " << c << "\n";

    return 0;

}
