#include <iostream>
using namespace std;

int main(){
    int x, i, result;
    int arr[3];

    cout << "数値を3つ入力して下さい\n";
    for (i = 0; i < 3; i++){
        cin >> x;
        arr[i] = x;
    }

    i = 0;
    result = 0;
    while(i < 3) {
        if (arr[i] > result)
            result = arr[i];
        i++;
    }
    cout << "最大値は" << result << "です。\n";

    return 0;
}