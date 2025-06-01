#include <iostream>
using namespace std;

int main(){
    // インデックス番号で指定した後ろに文字列を連結させる書き方
    // 文字列 S , T と、整数 N が与えられるので、 S の N 文字目の後ろに T を挿入した文字列を出力してください。
    string s, t, result;
    int index;
    cin >> s >> t >> index;

    result = s.substr(0, index) + t + s.substr(index);

    cout << result << endl;

    return 0;
}

// 別解
// int main(){
//     string S, T;
//     int N;
//     cin >> S;
//     cin >> T;
//     cin >> N;

//     cout << s.insert(N, T) << endl;
// }
