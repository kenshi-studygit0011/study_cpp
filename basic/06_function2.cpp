#include <iostream>
using namespace std;

// プロトタイプ宣言（前もって以下の関数があることを知らせておく）
void hello();

int main()
{
    hello();
    return 0;
}

void hello(){
    cout << "Hello world!\n";
}