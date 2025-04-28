#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    int min = *min_element(begin(arr), end(arr));
    cout << min << "\n";


    return 0;
}

// 別解
/*
int main(){
    int answer = 101;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        answer = min(answer, n);
    }
    cout << answer << endl;
    return 0;
}
*/