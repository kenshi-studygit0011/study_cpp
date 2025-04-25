#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "数値を入力してください。\n";
    cin >> x;

    if (x % 2 == 0 )
        cout << "偶数です。\n";
    else
        cout << "奇数です\n";


    return 0;
}