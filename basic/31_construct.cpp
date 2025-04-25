#include <stdio.h>
#include <iostream>
using namespace std;

// コンストラクタを使用してみる
class Student{
    public:
        int num;
        Student();
};

Student::Student(){
    num = 10;
}


int main()
{
    Student Taro;
    cout << Taro.num << "\n";
    return 0;
}