#include <iostream>
using namespace std;
#include <algorithm>


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
        result = result + arr[i];
        i++;
    }
    result = result / 3;
    cout << "答えは" << result << "です。\n";

    return 0;
}