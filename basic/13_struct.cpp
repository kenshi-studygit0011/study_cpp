#include <stdio.h>
#include <iostream>
using namespace std;

struct Student{
    char name[128];
    int year;
    int weight;
    int height;
};

int main()
{
    struct  Student Taro;
    Taro.year = 10;
    printf("%d\n", Taro.year);

    return 0;
}
