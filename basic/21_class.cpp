#include <stdio.h>
#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        int year;
        void show();
};

void Student::show(){
    cout << "番号: " << num << "\n";
    cout << "年齢: " << year << "\n";
}

int main()
{
    Student Taro;
    Taro.num = 10;
    Taro.year = 10;
    Taro.show();

    return 0;
}