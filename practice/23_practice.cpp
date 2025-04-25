
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// ポインタの配列: 文字列の配列をポインタで管理し、各文字列を表示するプログラムを作成してください。
int main(){
    const char* fruits[] = {"apple", "banana", "cherry", "grape", "orange"};
    
    int size = sizeof(fruits) / sizeof(fruits[0]); // 全体のサイズを1つのサイズで割っているので、配列の個数が求まる計算
    cout << "sizeof(fruits): " << sizeof(fruits) << "\n"; // const *charの全体の配列サイズ
    cout << "sizeof(fruits[0]): " << sizeof(fruits[0]) << "\n"; // const *charの1つの配列サイズ

    //各文字列を表示
    for(int i = 0; i < size; ++i){
        cout << "fruits[" << i << "] = " << fruits[i] << endl;
    }

    return 0;
}
