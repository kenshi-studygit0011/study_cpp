#include <iostream>
using namespace std;

int main(){
    int x, i, result;
    cout << "数値を入力してください。\n";
    cin >> x;

    for (i = 0; i <= x; i++){
        result = result + i;
        cout << result << "\n";
    }
    cout << "答え" << result << "\n";



    return 0;
}