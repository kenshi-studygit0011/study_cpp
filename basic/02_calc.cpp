#include <iostream>
using namespace std;

int main()
{
    // 数値がint型になっているので、小数点以下が表示されない。
    cout << 10 + 3 << "\n";
    cout << 10 - 3 << "\n";
    cout << 10 * 3 << "\n";
    cout << 10 / 3 << "\n";

    // 小数を扱う方法
    cout << 15 << "\n";
    cout << 3.14 << "\n";

    // 変数の使い方
    int r;
    r = 3;
    cout << r << "\n";
    cout << r * r * 3.14 << "\n";

    // 型変換
    double pi = 3.14;
    cout << (int)pi << "\n";

    // 定数の使い方
    const int x = 10;
    // x = 25; <-再度、値を代入することはできない
    cout << x << "\n";

    // 標準入力
    int input, second;
    cout << "2つの数値を入力してください\n";
    cin >> input >> second; // 一つ目にinputに入力、二つ目にsecondに入力
    cout << "足し算の結果: " << input + second << "\n";

    return 0;
}