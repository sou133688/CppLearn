#include <iostream>
using namespace std;

class myclass{
    int a;//非公開メンバ
public:
    void set_a(int num);//公開関数
    int get_a();//公開メンバ
};

void myclass::set_a(int num){
    a = num;
}

int myclass::get_a(){
    return a;
}

int main(){
    myclass ob1,ob2;

    ob1.set_a(10);
    ob2.set_a(99); 

    cout << ob1.get_a() << "\n";
    cout << ob2.get_a() << "\n";

    return 0;
}