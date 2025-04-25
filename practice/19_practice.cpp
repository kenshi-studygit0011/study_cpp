
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 素数判定: 整数を入力として受け取り、それが素数かどうかを判定して表示する関数を作成してください。
// 戻り値が無いためvoid型にする
void sosu(int n){
    if(n <= 1){
        cout << n << " は素数ではありません\n";
        return;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cout << n << "は素数ではありません\n";
            return;
        }
    }
    cout << n << "は素数です\n";

}


int main(){
    int n;
    cout << "整数を入力してください: ";
    cin >> n;
    sosu(n);

    return 0;
}
