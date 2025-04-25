
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// ファイルのコピー: テキストファイルを別のファイルにコピーするプログラムを作成してください。

int main(){
    // 入力元ファイルと出力先ファイルのストリームを用意
    ifstream inFile("31_output.txt");
    ofstream outFile("copy.txt");

    // ファイルが開けたか確認
    if(!inFile){
        cerr << "元ファイルを開けませんでした。" << endl;
        return 1;
    }
    if(!outFile){
        cerr << "コピー先ファイルを作成できませんでした。" << endl;
        return 1;
    }

    string line;
    while(getline(inFile, line)){
        outFile << line << endl;
    }

    cout << "ファイルを正常にコピーしました。" << endl;

    return 0;
}
