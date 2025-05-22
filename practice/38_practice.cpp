
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// 二分探索: ソートされた配列から特定の値を二分探索して、そのインデックスを表示するプログラムを作成してください。

int main(){
    int size;
    cout << "配列の大きさを指定してください。\n";
    cin >> size;

    int *arr = new int[size]; // 動的配列を用意

    cout << "数値を " << size << " 個入力してください。\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 直接ユーザー入力を配列に格納する。
    }

    // バブルソートで整列する
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

    // ソートの確認
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    // 二分探索でインデックスを検索
    int search;
    cout << "検索する値を入力してください: ";
    cin >> search;
    cout << "\n";


    int left=0, right=size-1, mid;
    bool flag = false;
    while(left < right){
        mid = (left + right) / 2;
        if(arr[mid] == search){
            cout << "インデックス番号は " << mid << " です\n";
            break;
        } else if(search < arr[mid]) {
            // 検索対象が真ん中よりも小さい場合 -> 右を真ん中より1つ小さい方へずらす
            right = mid - 1 ;
        } else{
            // 検索対象の値が真ん中より大きい場合 -> 左を真ん中より1つ大きい方へずらず
            left = mid + 1;
        }
    }

    if (!flag) {
        cout << "検索値は見つかりませんでした。\n";
    }

    delete[] arr; // 動的配列の削除
    return 0;


    
}
