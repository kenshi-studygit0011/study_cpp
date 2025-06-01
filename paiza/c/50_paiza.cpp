#include <iostream>
using namespace std;

int main(){
    // 数字から文字列への変換方法
    int x, y, n;
    cin >> x >> y >> n;
    string result = to_string(x + y);
    
    cout << result[n-1] << endl;

    return 0;
}

