#include <iostream>
#include <cctype> 
using namespace std;

int main(){
    // 小文字を大文字に変換する
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}

