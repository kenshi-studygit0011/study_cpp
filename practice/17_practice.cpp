#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 最小公倍数: 2つの整数を入力として受け取り、その最小公倍数を計算して表示する関数を作成してください。

int gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// 最小公倍数
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main(){
    int x, y;
    cout << "2つの整数を入力してください:";
    cin >> x >> y;

    int result = lcm(x, y);
    cout << "最大公倍数は: " << result << endl;

    return 0;
}

/*
別解

*/