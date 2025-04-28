#include <iostream>
#include <string>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    if(A * B <= C){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}