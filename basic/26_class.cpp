#include <stdio.h>
#include <iostream>
using namespace std;

class Student{
    public:
        int num;
};


int main()
{
    Student Taro, *p;
    p = &Taro;
    (*p).num = 10;
    cout << (*p).num  << "\n";

    return 0;
}