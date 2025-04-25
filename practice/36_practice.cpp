
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// 線形探索: 配列から特定の値を線形探索して、そのインデックスを表示するプログラムを作成してください。

int main(){
    // int size, arr[size]; ->c++ではこの定義は未定義になる。
    int size;
    cout << "配列の大きさを指定してください。\n";
    cin >> size;

    int *arr = new int[size]; // 動的配列を用意

    cout << "数値を " << size << " 個入力してください。\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 直接ユーザー入力を配列に格納する。
        
    }

    bool flag = false;
    cout << "探索する数値を入力してください\n";
    int search;
    cin >> search;
    for(int i = 0; i < size; i++){
        if(arr[i] == search){
            cout << "探索数値があるインデックス番号は" << i << "番目です\n";
            flag = true;
            break;
        }
    }

    if(!flag){
        cout << "指定された値は見つかりませんでした。\n";
    }

    delete[] arr; // 動的配列の削除

    return 0;


    
}
