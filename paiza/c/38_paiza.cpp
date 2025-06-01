#include <iostream>
#include <set>
using namespace std;

int main(){
// N 個の要素からなる数列 A が与えられます。数列 A は昇順にソートされています。A の重複した要素を取り除いて昇順に出力してください。

    // setでこの配列に入る値は必ず重複しないようにする。
    set<int> nums;

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        nums.insert(A);
    }

    for(auto it = nums.begin(); it != nums.end(); it++){
        // cout << "nums.begin()" << *it << endl; // *itは「nums.begin()1」という表記で出力される。ちなみに通常のitの場合はコンパイルエラーになります。理由としては、itはポインタのようなもののため。
        if(it != nums.begin()){
            cout << " ";
        }
        cout << *it;
    }
    cout << endl;

}
