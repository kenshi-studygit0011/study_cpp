#include <stdio.h>
#include <iostream>
using namespace std;

struct{
    char name[64];
    int year;
    int weight;
    int height;
}Taro, Hanako;

int main()
{
    // struct  Student Yamada; <- この場合はStudentの宣言がされていないため使用できない。
    Taro.year = 10;
    printf("Taroの年齢: %d\n", Taro.year);
    Hanako.year = 12;
    printf("Hanakoの年齢: %d\n", Hanako.year);

    return 0;
}
