#include <stdio.h>
#include <iostream>
using namespace std;

// 多重継承を使用する

class Mother{
    public:
        int num1;
};

class Father{
    public:
        int num2;
};

// 多重継承の書き方
class Child : public Mother, public Father{

};

int main()
{
    Child Taro;
    Taro.num1 = 10;
    Taro.num2 = 20;
    cout << Taro.num1 << "\n";
    cout << Taro.num2 << "\n";
    
    return 0;
}