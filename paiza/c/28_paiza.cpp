#include <iostream>
#include <string>
using namespace std;

int main(){
    // 要素数 N の数列 A と数値 M が与えられます。A の M 番目の値を出力してください。

    int size, index;
    cin >> size >> index;
    string *arr = new string[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 文字列を格納
    }

    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << "\n";
    // }

    cout << arr[index-1] << "\n";

    // 確保したメモリの解放
    delete[] arr;

    return 0;
}