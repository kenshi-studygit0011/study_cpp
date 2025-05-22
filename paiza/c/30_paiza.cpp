#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    // 自然数 A, B, C が与えられます。(A, B, C の最大値) - (A, B, C の最小値)を答えてください。
    int arr[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    
    // 最大値と最小値の取得
    int min = *min_element(begin(arr), end(arr));
    int max = *max_element(begin(arr), end(arr));

    int result = max - min;
    cout << result << "\n";

    return 0;
}