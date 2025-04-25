#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 最大公約数: 2つの整数を入力として受け取り、その最大公約数を計算して表示する関数を作成してください。

int gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int x, y;
    cout << "2つの整数を入力してください:";
    cin >> x >> y;

    int result = gcd(x, y);
    cout << "最大公約数は: " << result << endl;

    return 0;
}

/*
別解
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "The greatest common divisor is: " << gcd(a, b) << endl;
    return 0;
}
*/