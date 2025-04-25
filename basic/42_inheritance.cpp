#include <stdio.h>
#include <iostream>
using namespace std;

// 多重継承と仮想基本クラスを使用する

class Human{
    public:
        void show();
};

void Human::show(){
    cout << "共通の基本クラス\n";
}

class Mother : public virtual Human{
    // public:
    //     int num1;
};

class Father : public virtual Human{
    // public:
    //     int num2;
};

// 多重継承の書き方
class Child : public Mother, public Father{

};

int main()
{
    Child Taro;
    Taro.show();
    
    return 0;
}