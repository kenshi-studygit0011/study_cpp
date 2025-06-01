#include <iostream>
#include <set>
using namespace std;

int main(){
    // 部分的な文字列の取得方法
    string s;
    int start, end;
    cin >> s >> start >> end;
    
    end = end-start+1;
    start = start-1;
    // end = end-1;
    // cout << start << endl;
    // cout << end << endl;

    // substrはpythonでいうスライスのようなもの
    cout << s.substr(start, end) << endl;

    return 0;
}
