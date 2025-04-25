#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    // 文字のカウント: 文字列と特定の文字を入力として受け取り、その文字が文字列に何回出現するかを表示するプログラムを作成してください。
    string s1;
    cout << "文字列を入力してください\n";
    cin >> s1;
    cout << "検索したい文字を入力してください\n";
    char c1;
    cin >> c1;

    int count = 0;
    for(int i = 0; i < s1.length(); i++){
        cout << s1[i] << endl;
        if(s1[i] == c1)
            count++;
    }

    cout << count << "\n";

    return 0;
}