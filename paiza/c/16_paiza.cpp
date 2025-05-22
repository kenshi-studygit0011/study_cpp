#include <iostream>
#include <string>
using namespace std;

// 問題：10 個の文字列 S_1, S_2, S_3, ..., S_10 が改行区切りで与えられます。
// これらの文字列をすべて、半角スペース区切りで出力してください。
// 入力される値
// S_1
// S_2
// S_3
// ...
// S_10

// 期待する出力
// 答えの文字列を 1 行で出力してください。
// S_1 S_2 S_3 ... S_10

int main(){
    int size = 10;
    string *arr = new string[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 文字列を格納
    }

    for(int i = 0; i < size; i++){
        if(i == 9){
            cout << arr[i];
        } else {
            cout << arr[i] << " ";
        }
    }

    // 確保したメモリの解放
    delete[] arr;

    return 0;
}