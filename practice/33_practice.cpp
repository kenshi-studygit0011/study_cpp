
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// バイナリファイルの書き込み: 整数の配列をバイナリファイルに書き込むプログラムを作成してください。

int main(){
    // 書き込む整数の配列
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // バイナリモードでファイルを開く
    ofstream outfile("data.bin", ios::binary);

    if(!outfile){
        cerr << "ファイルを開けませんでした。\n";
        return 1;
    }

    // 配列全体を書き込む
    outfile.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

    // ファイルを閉じる
    outfile.close();

    cout << "バイナリファイルに書き込みました。\n";

    return 0;
}
