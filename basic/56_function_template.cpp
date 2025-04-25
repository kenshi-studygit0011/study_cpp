#include <stdio.h>
#include <iostream>
using namespace std;

// 関数テンプレートを使う
template <class T>
T nibai(T x){
    x *= 2;
    return x;
}

int main()
{
    cout << nibai(10) << "\n";

    return 0;
}