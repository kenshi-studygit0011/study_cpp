#include <iostream>
#include <vector>
using namespace std;

int main(){

    // 0 以上 9 以下の整数が N 個与えられます。各数値の出現回数を求め、「0」の出現回数、「1」の出現回数、...「9」の出現回数、をこの順に半角スペース区切りで1行に出力してください。

    int N, Q;
    cin >> N;
    vector<int> arr(10);

    // 数列の要素を格納
    for(int i = 0; i < N; i++){
        cin >> Q;
        arr[Q] = arr[Q] + 1;

    }

    for(int i = 0; i < 10; i++){
        if(i < 9){
            cout << arr[i] << " ";
        } else {
            cout << arr[i] << "\n";
        }
    }

    return 0;
}