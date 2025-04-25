
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// ファイルからの読み込み: テキストファイルから文字列を読み込み、表示するプログラムを作成してください。

int main(){
    // 読み込み用のifstreamオブジェクトを作成
    ifstream infile("31_output.txt");

    // ファイルが開けたか確認
    if(!infile){
        cerr << "ファイルを開くことができませんでした。\n";
        return 1;
    }

    // 1行ずつ読み込んで表示
    string line;
    while(getline(infile, line)){
        cout << line << "\n";
    }

    // ファイルを閉じる
    infile.close();

    return 0;
}
