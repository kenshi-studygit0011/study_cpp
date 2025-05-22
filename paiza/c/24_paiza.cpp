#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    // 9 個の数値が半角スペース区切りで入力されます。この数値を 3 行 3 列の形式で出力してください。
    // 具体的には、入力された数値を N_1 , N_2 , N_3 , ..., N_9 とするとき、 1 行目にはN_1 からN_3 を、2 行目には N_4 から N_6 を、3 行目には N_7 から N_9 を出力してください。
    // ただし、数値の間には半角スペースを、各行の末尾には、半角スペースの代わりに改行を入れてください。
    int size = 9;
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 文字列を格納
    }

    for(int i = 0; i < size; i++){
        cout << arr[i];
        if (i % 3 == 2){
            cout << "\n";
        } else {
            cout << " ";
        }
    }

    // 確保したメモリの解放
    delete[] arr;

    return 0;
}