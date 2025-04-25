#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    try{
        int num;
        cout << "0~10の間で数値を入力してください\n";
        cin >> num;
        if(num >= 0 && num <= 10)
            cout << "0~10の間です\n";
        else if(num < 0)
            throw string("0より小さいです\n");
        else
            throw string("10より大きいです");
    }
    catch(string x){
        cout << x;
    }

    return 0;
}