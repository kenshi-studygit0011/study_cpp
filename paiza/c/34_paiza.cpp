#include <iostream>
#include <map>
using namespace std;

int main(){
    // 文字列が N 個与えられます。各文字列の出現回数を文字列の辞書順に出力してください。    vector<int> nums(26);
    // 問題としては同じ文字列が何回出力されるかを調べる。
    
    map<string, int>str; // map関数を使用して、<文字列、数値>の組み合わせを格納できるように用意。

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        str[t]++;
    }

    // strに格納してある<stringとint>の組み合わせitに出して、firstで指定するとstringが、secondで指定すると、intが出力される。str.begin()はstrに入っている一番最初の組み合わせを指す。
    for(auto it = str.begin(); it != str.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }

}