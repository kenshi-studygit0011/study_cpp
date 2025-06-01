#include <iostream>
#include <set>
using namespace std;

int main(){
// 重複判定
// N 個の要素からなる数列 A が与えられます。2 ≦ i ≦ N の各 i に対して、A_i と同じ値が A_1 から A_{i-1} の間にあるかどうかを判定してください。

    set<int> nums;

    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int A;
        cin >> A;

        // 1回目はスルーされる
        if(i > 0){
            // numsにAがあるか確認する条件分岐
            if(nums.count(A)){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
        nums.insert(A);
    }

}
