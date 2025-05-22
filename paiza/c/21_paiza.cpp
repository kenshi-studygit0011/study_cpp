#include <iostream>
#include <string>
using namespace std;

int main(){
    // 10 個の数値が半角スペース区切りで与えられます。これらの数値すべて受け取り、そのまま出力してください。ただし、数値を出力した直後に必ずカンマを、末尾にはさらに改行も出力してください。
    int size = 10;
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 文字列を格納
    }

    for(int i = 0; i < size; i++){
        if (i == 9){
            cout << arr[i] << "\n";
        } else {
            cout << arr[i] << " | ";
        }
    }

    // 確保したメモリの解放
    delete[] arr;

    return 0;
}