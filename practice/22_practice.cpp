
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 配列とポインタ: 配列の要素をポインタでアクセスして表示するプログラムを作成してください。
int main(){
    int arr[3] = {10, 20, 30};
    int *p;
    // 配列のポインタを格納（以下の場合は先頭要素のアドレスを格納していることになっている）
    p = arr;

    //ポインタのpが指し示す値を修正 = nの修正
    for(int i = 0; i < 3; i++){
        cout << "arr[" << i << "] = " << *(p + i) << endl; // 配列を1つずつ表示する（+iとすることアドレスの示す箇所が先頭からi分ズレていく（値が増えていくのではなく、アドレスがズレていくイメージ））
    }

    return 0;
}
