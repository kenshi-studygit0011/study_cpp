
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// バブルソート: 配列の要素をバブルソートで並べ替えるプログラムを作成してください。

int main(){
    int size;
    cout << "配列の大きさを指定してください。\n";
    cin >> size;

    int *arr = new int[size]; // 動的配列を用意

    cout << "数値を " << size << " 個入力してください。\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 直接ユーザー入力を配列に格納する。
    }

    int tmp;
    for(int i = 0; i < size; i++){
        for(int n = i+1; n < size; n++){
            if(arr[i] > arr[n]){
                tmp = arr[n];
                arr[n] = arr[i];
                arr[i] = tmp;
            }

        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    delete[] arr; // 動的配列の削除
    return 0;


    
}
