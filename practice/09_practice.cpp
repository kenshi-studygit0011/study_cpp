#include <iostream>
using namespace std;
#include <algorithm>

// 要素を逆順で表示する
int main(){
    int arr[3] = {10, 20, 30};
    reverse(arr, arr+3);

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    // 別解＊＊＊＊＊＊＊
    // string str;
    // cout << "Enter a string: ";
    // cin >> str;
    // reverse(str.begin(), str.end());
    // cout << "Reversed string: " << str << endl;
    // ＊＊＊＊＊＊＊＊＊＊＊

    return 0;
}