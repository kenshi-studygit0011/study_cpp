#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    // 文字列の連結: 2つの文字列を入力として受け取り、それらを連結して表示するプログラムを作成してください。
    string s1;
    cout << "文字列を入力してください\n";
    cin >> s1;
    cout << "さらに文字列を入力してください\n";
    string s2;
    cin >> s2;

    string full_string;
    full_string = s1 + s2;

    cout << "文字列: " << full_string << "\n";
    return 0;
}