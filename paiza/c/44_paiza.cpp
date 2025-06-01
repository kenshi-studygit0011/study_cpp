#include <iostream>
#include <set>
using namespace std;

int main(){
    // ある文字列からターゲットのインデックス番号を取得する方法
    string s;
    int s_index;
    char target;
    cin >> s >> target;

    s_index = s.find(target); // find関数は引き数にcharやstring型を取る。
    cout << s_index+1 << endl;

    

}
