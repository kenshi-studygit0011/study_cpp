#include <iostream>
#include <map>
using namespace std;

int main(){
    // paiza 商店では N 個の商品が売られており、i 番目の商品の名前は A_i で、価格は B_i です。
    // あなたは M 個の商品名が書かれたお買い物リスト S を持っています。リストに書かれているそれぞれの商品について、paiza 商店での価格を出力してください。リストには paiza 商店が扱っていない商品も書かれている可能性がありますが、その場合は価格の代わりに -1 を出力してください。
    
    map<string, int>str; // map関数を使用して、<文字列、数値>の組み合わせを格納できるように用意。

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string key;
        int val;
        cin >> key >> val;
        str[key] = val; // keyとvalの組み合わせで格納
    }

    for(int i = 0; i < m; i++){
        string st;
        cin >> st;

        cout << "str.count(st)" << str.count(st) << endl;

        if(str.count(st)){
            cout << str[st] << endl;
        } else {
            cout << -1 << endl;
        }
    }
}