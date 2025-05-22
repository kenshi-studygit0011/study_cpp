#include <iostream>
#include <iomanip> // setw を使うため
using namespace std;

int main() {
    // 九九表
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            // cout << setw(2) << i * j << " ";
            cout << i * j << " ";
        }
        cout << "\n";
    }
    return 0;
}