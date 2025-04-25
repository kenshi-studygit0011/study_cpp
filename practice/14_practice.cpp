#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    // 部分文字列の抽出: 文字列と開始位置、および長さを入力として受け取り、その部分文字列を表示するプログラムを作成してください。
    string s1;
    cout << "文字列を入力してください\n";
    cin >> s1;
    cout << "開始位置を入力してください\n";
    int start;
    cin >> start;
    start = start - 1;
    cout << "長さを入力してください\n";
    int len;
    cin >> len;

    if(start < 0 || start >= s1.length()){
        cout << "開始位置が不正です\n";
        return 1;
    }
    if(start + len > s1.length()){
        cout << "指定された長さが長すぎます。\n";
        return 1;
    }

    string part = s1.substr(start, len);
    cout << "部分文字列: " << part << "\n";
    return 0;
}