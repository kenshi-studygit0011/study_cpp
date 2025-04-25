
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// ポインタの配列: 文字列の配列をポインタで管理し、各文字列を表示するプログラムを作成してください。
// 動的メモリ解放: new演算子で動的に割り当てたメモリを使用して配列を作成し、delete演算子で解放するプログラムを作成してください。
int main(){
    int size;

    cout << "配列のサイズを入力してください";
    cin >> size;

    // new演算子でint型の配列を動的に確保
    int *arr = new int[size]; // 配列の先頭アドレスをarrに格納する。newを使用すると関数をまたいで使用することが可能（つまり消えない）

    // 配列に値を代入
    for(int i = 0; i < size; i++){
        arr[i] = i * 10;
    }

    // 配列の要素を表示
    cout << "配列の要素: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    // 確保したメモリの解放
    delete[] arr;

    return 0;
}
