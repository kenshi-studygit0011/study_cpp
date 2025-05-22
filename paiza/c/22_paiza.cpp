#include <iostream>
#include <string>
using namespace std;

int main(){
    // 大きな数値を 3 けたごとにカンマ区切りで出力
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if (i % 3 == 0 && i != 0){
            cout << ',';
        }
        cout << s[i];
    }

    return 0;
}