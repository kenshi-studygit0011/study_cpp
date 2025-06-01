#include <iostream>
#include <set>
using namespace std;

int main(){
// 文字検索
// 文字列 S と整数 i が与えられるので、 S の i 文字目を出力してください。

    string S;
    int i;

    cin >> S;
    cin >> i;

    i--; // iから1引く
    cout << S[i] << endl; // 文字列であればインデックス番号を指定することで表示させることができる。



}
