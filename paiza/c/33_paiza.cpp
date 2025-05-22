#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 英小文字の出現率
    // 長さ N の文字列 S が与えられます。S に含まれている各文字の出現回数をそれぞれ求め、「a」の出現回数、「b」の出現回数、...、「z」の出現回数をこの順に半角スペース区切りで1行に出力してください。
    vector<int> nums(26);

    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        char c = s[i];
        cout << "cの値" << c << "\n";
        // C++ では文字（char）は整数型として扱われるため、'a' や 'z' は実際にはASCIIコードの整数値です。'a' → 97 'b' → 98 'z' → 122
        // 例：'c' - 'a' = 99 - 97 = 2
        cout << "nums[c - 'a']の値" << nums[c - 'a'] << "\n";

        // 小文字26個あり、そのインデックスを上のコードで計算し、以下でカウントアップする。
        nums[c - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        cout << nums[i];
        if(i == 25)
            cout << "\n";
        else
            cout << " ";
    }
}