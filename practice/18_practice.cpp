
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// フィボナッチ数列: N番目のフィボナッチ数を計算して表示する関数を作成してください。
int fibonacci(int n){
    // 0以下を入力されたらリターンする
    if(n <= 1) return n;

    int a = 0, b = 1, result = 0;
    for(int i = 2; i <= n; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}


int main(){
    int n;
    cout << "何番目のフィボナッチ数を求めますか？: ";
    cin >> n;

    int result = fibonacci(n);
    cout << n << "番目のフィボナッチ数は " << result << "です" << endl;

    return 0;
}
