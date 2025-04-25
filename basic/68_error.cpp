#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    try{
        int num;
        cout << "番号を入力してください\n";
        cout << "1:整数, 2:小数, 3:文字列\n";
        cin >> num;
        if(num == 1)
            throw 1;
        else if(num == 2)
            throw 3.14;
        else
            throw string("文字列");
    }
    catch(int x){
        cout << "int型の整数\n";
    }
    catch(double y){
        cout << "double型の小数\n";
    }
    catch(string z){
        cout << "string型の文字列\n";
    }
    catch(...){
        cout << "どんなデータ型でもよい\n";
    }

    return 0;
}