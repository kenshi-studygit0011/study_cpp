#include <iostream>
#include <string>
using namespace std;

int funcB(int *arr){
    cout << "******************\n";
    cout << "funcBの処理を開始\n";
    arr[0] = 222; // pointerの参照先の値を変更する

    // 配列のインデックス番号を1つずつずらしていく書き方
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    // ※上記のarr[i]と*(arr + i)は同じ意味で、書き方が異なっているだけ。

    // pointerのアドレスに1を足して、配列の中身を表示する書き方
    for(int i = 0; i < 3; i++){
        cout << *(arr + i) << " ";
    }
    cout << "\n";
    cout << "******************\n";
    return 0;
}

int main(){
    int arr[3] = {10, 20, 30};
    int *p = arr;

    funcB(arr); // arrはint*型で扱われる。
    // funcB(p); // この引数のpもint*型。

    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}