#include <iostream>
using namespace std;

int main()
{
    // 改行の方法
    std::cout << "I'm Japanese.";
    cout << "Hello World" << endl; // バッファに溜まった未処理のデータを吐き出せる（フラッシュ）
    cout << "Hello World\n"; // 通常の改行
}