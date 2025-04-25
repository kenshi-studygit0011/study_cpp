#include <stdio.h>
#include <iostream>
using namespace std;

// 継承元のコンストラクタを使用する

class Student{
    public:
        static int grade;
};

int Student::grade = 6;

int main()
{
    Student Taro;
    cout << Taro.grade << "\n";
    
    return 0;
}