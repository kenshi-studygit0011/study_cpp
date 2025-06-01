#include <iostream>
#include <set>
using namespace std;

int main(){
    // 文字を連結する方法
    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        str.append(s);
    }
    
    cout << str << endl;
    

}
