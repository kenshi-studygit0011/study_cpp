#include <stdio.h>
#include <iostream>
using namespace std;

struct Student{
    int year;
    int num;
};

int main()
{
    struct Student Taro;
    Taro.year = 10;
    cout << Taro.year << "\n";

    
    return 0;
}