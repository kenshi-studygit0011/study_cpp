#include <stdio.h>
#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        int year;
        void show(){
            cout << num << "\n";
            cout << year << "\n";
        }
};

int main()
{
    Student Yamada;
    Yamada.num = 10;
    Yamada.year = 10;
    Yamada.show();

    return 0;
}