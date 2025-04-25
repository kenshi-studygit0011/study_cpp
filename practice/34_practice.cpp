
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// バイナリファイルの読み込み: バイナリファイルから整数の配列を読み込み、表示するプログラムを作成してください。

int main(){
    // 読み込んだデータを格納する配列
    const int size = 5;
    int numbers[size];

    // バイナリファイルを開く（読み込み専用、バイナリモード）
    ifstream infile("data.bin", ios::binary);

    if(!infile){
        cerr << "ファイルを開けませんでした。\n";
        return 1;
    }

    // ファイルから配列へ読み込む
    infile.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

    // ファイルを閉じる
    infile.close();

    // 読み込んだデータを表示　
    cout << "バイナリファイルから読み込んだデータ:\n";
    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
