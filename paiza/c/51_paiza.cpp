#include <iostream>
using namespace std;

int main(){
    // 大文字を小文字にする
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }

    cout << s << endl;

    return 0;
}

