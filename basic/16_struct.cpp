#include <stdio.h>
#include <iostream>
using namespace std;

struct Fruits{
    int apple;
    int banana;
    int orange;
};

int main()
{
    struct Fruits store1 = {100,200,300};
    struct Fruits store3;
    store3 = store1;
    printf("%d\n", store1.apple);
    printf("%d\n", store1.banana);
    printf("%d\n", store1.orange);
    printf("%d\n", store3.apple);
    printf("%d\n", store3.banana);
    printf("%d\n", store3.orange);
    return 0;
}
