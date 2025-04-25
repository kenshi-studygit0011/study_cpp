#include <iostream>
#include <string>
using namespace std;


int main(){
    // 文字列の長さ: 文字列を入力として受け取り、その長さを表示するプログラムを作成してください。
    int x, i, result;
    string s1;
    cout << "文字列を入力してください\n";
    cin >> s1;
    cout << "文字列の長さは、" << s1.size() << "文字です\n";

    return 0;
}