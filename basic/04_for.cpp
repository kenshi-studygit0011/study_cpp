#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++) {
        cout << i << "の段:";

        for (j = 1; j <= 9; j++){
            cout << setw(5) << i * j;
            // setwを使用することで指定した数分の範囲で出力を行っている。i*jの答え込みで5スペースで文字を出力する。iomanipが必要。
        }
        cout << "\n";
    }

    return 0;
}