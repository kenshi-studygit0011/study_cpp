
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 階乗計算: 整数を入力として受け取り、その階乗を計算して表示する関数を作成してください。
void kaijo(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result = result * i;
    }
    cout << n << "の階乗は" << result << "です\n";

}


int main(){
    int n;
    cout << "整数を入力してください: ";
    cin >> n;
    kaijo(n);

    return 0;
}
