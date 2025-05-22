#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    // 大きな数値を 3 けたごとにカンマ区切りで出力
    string s, t;
    cin >> s;

    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        if (i % 3 == 0 && i != 0){
            t += ',';
        }
        t += s[i];
    }
    reverse(t.begin(), t.end());
    cout << t << "\n";

    return 0;
}