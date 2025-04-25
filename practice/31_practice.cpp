
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// ファイルへの書き込み: テキストファイルに文字列を書き込むプログラムを作成してください。

int main(){
    // 書き込み用のofstreamオブジェクトを作成(ファイルの作成)
    ofstream outfile("31_output.txt");

    // ファイルが開けたか確認
    if(!outfile){
        cerr << "ファイルを開くことができませんでした。\n";
        return 1;
    }

    // ファイルに書き込む
    outfile << "こんにちは、世界!\n";
    outfile << "これはc++でファイルに書き込む例です\n";

    // ファイルを閉じる
    outfile.close();

    cout << "ファイルに書き込みました。\n";

    return 0;
}
