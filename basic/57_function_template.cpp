#include <stdio.h>
#include <iostream>
using namespace std;

// 関数テンプレートを使う(引数を二つ以上使う場合)
template <class T1, class T2>
void comp(T1 x, T2 y){
    if(x > y)
        cout << "整数の方が大きいです\n";
    else
        cout << "小数の方が大きいです\n";
}

int main()
{
    int num1;
    double num2;
    cout << "整数を入力してください\n";
    cin >> num1;
    cout << "小数を入力してください\n";
    cin >> num2;
    comp(num1, num2);
    return 0;
}