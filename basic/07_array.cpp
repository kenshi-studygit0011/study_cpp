#include <iostream>
using namespace std;


int main()
{
    int array[] = {10, 20, 30};
    cout << array[0] << "\n";
    cout << array[1] << "\n";
    cout << array[2] << "\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    for (i = 0; i < 5; i++) {
        cout << i << "番目: " << arr[i] << "\n";
    }

    // 配列のそれぞれの要素に値を入力する
    int arry[5];
    cout << "数値を入力してください\n";
    for (i = 0; i < 5; i++) {
        cin >> arry[i];
    }
    cout << "入力した数はこちらです\n";
    for (i = 0; i < 5; i++) {
        cout << i << "番目: " << arry[i] << "\n";
    }


    return 0;
}
