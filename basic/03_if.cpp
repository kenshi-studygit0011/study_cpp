#include <iostream>
using namespace std;

int main()
{
    if(10) // 0か0でないかの条件式
        cout << "処理が実行されます\n";

    int num;
    cout << "数値を入力してください";
    cin >> num;
    if (num == 10)
    cout << "10と同じです\n";

    int n;
    cout << "数値を入力してください";
    cin >> n;
    if (n >= 5 && n <= 10)
        cout << "5と10の間にあります\n";

    int nu;
    cout << "数値を入力してください";
    cin >> nu;
    if(nu == 10) {
        cout << "10と同じです\n";
        cout << "正解です\n";
    }


    return 0;
}