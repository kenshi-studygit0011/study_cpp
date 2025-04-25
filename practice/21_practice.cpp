
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// ポインタの基本: 整数変数のアドレスをポインタで取得し、そのポインタを使用して変数の値を変更するプログラムを作成してください。
int main(){
    int n = 10;
    int *p;
    p = &n;

    //ポインタのpが指し示す値を修正 = nの修正
    *p = 20;
    printf("%d\n", n);

    return 0;
}
