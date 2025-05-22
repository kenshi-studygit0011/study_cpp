#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, Q, M;
    cin >> N;
    int arr[N];
    
    for(int i = 0; i < N; i++){
        cin >> arr[i]; // 文字列を格納
    }
    
    cin >> Q;
    int arr2[Q];
    for(int i = 0; i < Q; i++){
        cin >> M;
        cout << arr[M-1] << "\n";
    }

    return 0;
}