#include <stdio.h>
#include <iostream>
using namespace std;

void keisan(int *x){
    *x = 25; // xに入っているアドレスが指す値を変更する。（変数appleに入っている値を変更する）
}


int main()
{
    // ★ポインタを使用する際に意識すること
    // ポインタはアドレスしか持てない
    // *はその先のものを表す

    // 別の関数からpointerを操作
    int apple = 10;
    printf("1回目: %d\n", apple);
    keisan(&apple); // 別の関数に参照先のアドレスを渡す

    printf("書き換えました\n");
    printf("2回目: %d\n", apple);
}
