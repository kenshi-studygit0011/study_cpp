#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "数値を入力してください。\n";
    cin >> x;
    cin >> y;
    cin >> z;

    if (x > y && x > z )
        cout << x << "\n";
    else if (y > x && y > z)
        cout << y << "\n";
    else
        cout << z << "\n";



    return 0;
}