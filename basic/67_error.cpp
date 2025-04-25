#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    try{
        int num;
        cout << "数値を入力してください\n";
        cin >> num;
        if(num >= 0 && num <= 10)
            cout << "0~10の間です\n";
        else
            throw 1;
    }
    catch(int x){
        cout << "範囲外です\n";
    }

    return 0;
}