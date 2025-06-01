#include <iostream>
using namespace std;

int main(){
    // 文字列途中に任意の文字と入れ替える方法
    // 文字列 S と整数 i と文字 c が与えられるので、S の i 文字目を c に書き換えたものを出力してください。

    string s;
    int i;
    char c;
    cin >> s >> i >> c;

    s[i-1] = c;
    cout << s << endl;

    return 0;
}

