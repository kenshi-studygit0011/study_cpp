#include <iostream>
#include <set>
using namespace std;

int main(){
// 集合の結合
// N 個の要素からなる数列 A, B が与えられます。A または B に含まれる値をすべて列挙し、重複を取り除いて昇順に出力してください。

    set<int> nums;

    int N;
    cin >> N;
    for(int i = 0; i < 2 * N; i++){
        int A;
        cin >> A;
        nums.insert(A);
    }

    for(auto it = nums.begin(); it != nums.end(); it++){
        if(it != nums.begin()){
            cout << " ";
        }
        cout << *it;
    }
    cout << endl;

}
