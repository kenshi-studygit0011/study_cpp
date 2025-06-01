#include <iostream>
#include <algorithm>
using namespace std;

int main(){
// N 個の文字列 S_1, ... , S_N と、Q 個の文字列 T_1, ... , T_Q が与えられます。各 T_i について、以下の処理を行ってください。
// ・ S_j == T_i を満たす最小の j を出力する。ただし、そのような j が存在しない場合は -1 を出力する。    // あなたは M 個の商品名が書かれたお買い物リスト S を持っています。リストに書かれているそれぞれの商品について、paiza 商店での価格を出力してください。リストには paiza 商店が扱っていない商品も書かれている可能性がありますが、その場合は価格の代わりに -1 を出力してください。

    int n, b;
    cin >> n >> b;
    int *arr = new int[n];
    // map<string, int> str; //辞書を用意する

    for(int i = 0; i < n; i++){ // 最終的に1から数えた配列の番号を出力するため、カウントを1から行う。
        cin >> arr[i];
    }

    auto it = find(arr, arr + n, b);

    if(it != arr + n){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    delete[] arr;

}