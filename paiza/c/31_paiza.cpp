#include <iostream>
#include <vector>
using namespace std;

// N 個の要素からなる数列 A が与えられます。数列 A に対し、次の 3 つの操作を行うプログラムを作成してください。
// ・ push_back x : A の末尾に x を追加する
// ・ pop_back : A の末尾を削除する
// ・ print : A を半角スペース区切りで1行に出力する


// 例えば、入力例 1 において、数列 A は最初「1 2 3」です。最初の操作は「push_back 10」なので、末尾に 10 を追加して「1 2 3 10」となります。 2 つ目の操作は「push_back 12」なので、「1 2 3 10 12」となります。 3 つ目の操作は「print」なので「1 2 3 10 12」を出力します。 4 つ目の操作は「pop_back」なので末尾の「12」を削除して、「1 2 3 10」となります。最後の操作は「print」なので「1 2 3 10」を出力します。

int main(){

    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);

    // 数列の要素を格納
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < Q; i++){
        int query;
        cin >> query;
        if(query == 0){
            // push_back
            // push_back時の二文字目はxに入力してもらう
            int x;
            cin >> x;
            arr.push_back(x);
        } else if(query == 1){
            // pop_back
            arr.pop_back();
        } else {
            // print
            for(int j = 0; j < arr.size(); j++){
                cout << arr[j];
                if(j == arr.size() - 1){
                    cout << "\n";
                } else {
                    cout << " ";
                }
            }
        }
    }

    return 0;
}