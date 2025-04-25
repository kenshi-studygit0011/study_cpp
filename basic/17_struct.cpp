#include <stdio.h>
#include <iostream>
using namespace std;

struct Fruits{
    int apple;
    int orange;
    int banana;
};

void price (struct Fruits store1);

int main()
{
    struct Fruits store1 = {100,200,300};
    struct Fruits store3;
    store3 = store1;
    price(store1);
    return 0;
}

void price (struct Fruits store1){
    printf("リンゴの金額: %d\n", store1.apple);
    printf("オレンジの金額: %d\n", store1.orange);
    printf("バナナの金額: %d\n", store1.banana);
    return;
}
