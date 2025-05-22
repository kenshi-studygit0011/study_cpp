#include <iostream>
#include <string>
using namespace std;

int main(){
    int size = 3;
    string *arr = new string[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i]; // 文字列を格納
    }

    for(int i = 0; i < size; i++){
        if (i == 2){
            cout << arr[i] << "\n";
        } else {
            cout << arr[i] << "|";
        }
    }

    // 確保したメモリの解放
    delete[] arr;

    return 0;
}