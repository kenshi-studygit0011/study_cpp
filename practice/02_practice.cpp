#include <iostream>
using namespace std;

int main(){
    int x, y, result;
    cout << "数値を二つ入力してください。1つ入力したらEnterを押してください\n";
    cin >> x;
    cin >> y;

    result = x + y;
    cout << "答えは: " << result << "\n";

    return 0;
}