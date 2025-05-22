#include <iostream>
using namespace std;

int main() {
    // 以下をC++で表示してください。
    // 自然数 N が入力されます。N 行 N 列の九九表を出力してください。具体的には、出力の i 行 j 列目 (1 ≦ i, j ≦ N ) の数値は i * j になるように出力してください。
    // ただし、数値の間には半角スペースを、各行の末尾には、半角スペースの代わりに改行を入れてください。
    
int N;
    cin >> N;  // 自然数 N を入力

    for (int i = 1; i <= N; i++) {           // i 行目
        for (int j = 1; j <= N; j++) {       // j 列目
            cout << i * j;
            if (j != N) {
                cout << " ";  // 最後の列以外にはスペースを追加
            }
        }
        cout << endl;  // 行の終わりには改行
    }

    return 0;
}