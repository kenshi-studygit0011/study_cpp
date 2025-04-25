#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    // 文字列の逆転: 文字列を入力として受け取り、それを逆転して表示するプログラムを作成してください。
    string s1;
    cout << "文字列を入力してください\n";
    cin >> s1;

    reverse(s1.begin(), s1.end());

    cout << "文字列の逆順は、" << s1 << "文字です\n";

    return 0;
}