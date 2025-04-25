#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct Fruits{
    int apple;
    int banana;
    int orange;
}Fruits;

int main()
{
    // typedefの基本形
    // typedef unsigned int seisu;
    // seisu number = 15;
    // printf("%d\n", number);

    Fruits store1 = {100,200,300};
    printf("リンゴの金額: %d\n", store1.apple);

    return 0;
}