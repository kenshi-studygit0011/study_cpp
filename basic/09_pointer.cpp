#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // ★ポインタを使用する際に意識すること
    // ポインタはアドレスしか持てない
    // *はその先のものを表す

    int apple = 10;
    int *p;
    p = &apple;
    printf("%d\n", *p); // pointerのpが指し示す値を出力
    printf("%p\n", p); // pに代入されている値を出力
}
