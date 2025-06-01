#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
// N 個の文字列 S_1, ... , S_N と、Q 個の文字列 T_1, ... , T_Q が与えられます。各 T_i について、以下の処理を行ってください。
// ・ S_j == T_i を満たす最小の j を出力する。ただし、そのような j が存在しない場合は -1 を出力する。    // あなたは M 個の商品名が書かれたお買い物リスト S を持っています。リストに書かれているそれぞれの商品について、paiza 商店での価格を出力してください。リストには paiza 商店が扱っていない商品も書かれている可能性がありますが、その場合は価格の代わりに -1 を出力してください。

    int n, q;
    cin >> n >> q;
    map<string, int> str; //辞書を用意する

    for(int i = 1; i <= n; i++){ // 最終的に1から数えた配列の番号を出力するため、カウントを1から行う。
        string s;
        cin >> s;

        if(str.find(s) == str.end()){
            // sに入っている文字が初めて出てきた場合
            str[s] = i; // インデックス番号を組み合わせる
        }
    }

    for(int i = 0; i < q; i++){
        string target;
        cin >> target;

        if(str.find(target) != str.end()){ // targetの文字がstrの辞書の中にあるか確認
            cout << str[target] << endl;
            // cout << "文字 '" << target << "' は含まれています" << endl;
        } else {
            cout << -1 << endl;
            // cout << "文字 '" << target << "' は含まれていません" << endl;
        }
    }
}