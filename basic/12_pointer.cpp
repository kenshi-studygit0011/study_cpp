#include <stdio.h>
#include <iostream>
using namespace std;

struct Fruits{
    char name[128];
    int price;
    int zaiko;
};

int main()
{
    // ★ポインタを使用する際に意識すること
    // ポインタはアドレスしか持てない
    // *はその先のものを表す

    struct Fruits store = {"apple", 150, 50};
    struct Fruits *p;
    p = &store;
    printf("名前: %s\n", (*p).name);
    printf("金額: %d\n", (*p).price);
    printf("在庫: %d\n", p->zaiko); // 別の方法による書き方

    return 0;
}
